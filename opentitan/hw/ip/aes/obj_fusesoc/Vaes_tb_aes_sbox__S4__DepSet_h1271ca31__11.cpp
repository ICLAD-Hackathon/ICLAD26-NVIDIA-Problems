// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__52(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__52\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1230__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1230__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1230__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1230__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1230__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1230__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1231__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1231__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1231__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1232__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1232__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1232__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1233__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1233__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1233__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1234__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1234__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1234__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1235__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1235__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1235__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1236__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1236__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1236__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1236__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1236__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1236__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1237__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1237__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1237__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1238__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1238__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1238__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1239__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1239__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1239__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1240__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1240__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1240__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1241__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1241__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1241__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1260__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1260__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1260__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1261__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1261__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1261__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1264__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1264__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1264__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1265__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1265__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1265__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1268__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1268__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1268__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1269__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1269__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1269__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xcU] 
                          << 0xcU)) | ((0xf0000U & 
                                        vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xcU]) 
                                       | ((0xff00U 
                                           & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xcU] 
                                              >> 0xcU)) 
                                          | (0xffU 
                                             & ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xdU] 
                                                 << 4U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xcU] 
                                                   >> 0x1cU))))));
    __Vfunc_aes_mul_gf2p2__1260__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1260__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1260__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1260__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1260__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1260__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1260__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1260__d)));
    __Vfunc_aes_mul_gf2p2__1260__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1260__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1260__d)));
    __Vfunc_aes_mul_gf2p2__1260__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1260__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1260__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1260__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1260__b)));
    __Vfunc_aes_mul_gf2p2__1260__Vfuncout = __Vfunc_aes_mul_gf2p2__1260__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1260__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1261__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1261__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1261__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1261__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1261__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1261__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1261__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1261__d)));
    __Vfunc_aes_mul_gf2p2__1261__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1261__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1261__d)));
    __Vfunc_aes_mul_gf2p2__1261__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1261__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1261__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1261__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1261__b)));
    __Vfunc_aes_mul_gf2p2__1261__Vfuncout = __Vfunc_aes_mul_gf2p2__1261__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1261__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1264__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1264__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1264__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1264__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1264__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1264__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1264__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1264__d)));
    __Vfunc_aes_mul_gf2p2__1264__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1264__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1264__d)));
    __Vfunc_aes_mul_gf2p2__1264__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1264__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1264__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1264__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1264__b)));
    __Vfunc_aes_mul_gf2p2__1264__Vfuncout = __Vfunc_aes_mul_gf2p2__1264__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1264__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1265__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1265__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1265__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1265__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1265__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1265__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1265__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1265__d)));
    __Vfunc_aes_mul_gf2p2__1265__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1265__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1265__d)));
    __Vfunc_aes_mul_gf2p2__1265__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1265__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1265__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1265__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1265__b)));
    __Vfunc_aes_mul_gf2p2__1265__Vfuncout = __Vfunc_aes_mul_gf2p2__1265__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1265__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1230__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1230__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1231__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1230__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1231__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1230__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1231__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1231__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1231__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1231__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1231__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1231__d)));
    __Vfunc_aes_mul_gf2p2__1231__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1231__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1231__d)));
    __Vfunc_aes_mul_gf2p2__1231__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1231__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1231__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1231__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1231__b)));
    __Vfunc_aes_mul_gf2p2__1231__Vfuncout = __Vfunc_aes_mul_gf2p2__1231__f;
    __Vfunc_aes_mul_gf2p4__1230__a = __Vfunc_aes_mul_gf2p2__1231__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1232__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1230__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1230__delta)));
    __Vfunc_aes_mul_gf2p2__1232__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1230__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1230__gamma)));
    __Vfunc_aes_mul_gf2p2__1232__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1232__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1232__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1232__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1232__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1232__d)));
    __Vfunc_aes_mul_gf2p2__1232__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1232__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1232__d)));
    __Vfunc_aes_mul_gf2p2__1232__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1232__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1232__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1232__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1232__b)));
    __Vfunc_aes_mul_gf2p2__1232__Vfuncout = __Vfunc_aes_mul_gf2p2__1232__f;
    __Vfunc_aes_mul_gf2p4__1230__b = __Vfunc_aes_mul_gf2p2__1232__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1233__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1230__delta));
    __Vfunc_aes_mul_gf2p2__1233__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1230__gamma));
    __Vfunc_aes_mul_gf2p2__1233__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1233__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1233__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1233__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1233__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1233__d)));
    __Vfunc_aes_mul_gf2p2__1233__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1233__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1233__d)));
    __Vfunc_aes_mul_gf2p2__1233__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1233__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1233__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1233__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1233__b)));
    __Vfunc_aes_mul_gf2p2__1233__Vfuncout = __Vfunc_aes_mul_gf2p2__1233__f;
    __Vfunc_aes_mul_gf2p4__1230__c = __Vfunc_aes_mul_gf2p2__1233__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1234__g = __Vfunc_aes_mul_gf2p4__1230__b;
    __Vfunc_aes_scale_omega2_gf2p2__1234__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1234__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1234__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1234__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1234__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1230__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1234__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1235__g = __Vfunc_aes_mul_gf2p4__1230__b;
    __Vfunc_aes_scale_omega2_gf2p2__1235__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1235__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1235__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1235__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1235__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1230__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1235__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1230__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1230__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1236__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1236__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1237__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1236__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1237__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1236__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1237__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1237__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1237__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1237__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1237__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1237__d)));
    __Vfunc_aes_mul_gf2p2__1237__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1237__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1237__d)));
    __Vfunc_aes_mul_gf2p2__1237__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1237__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1237__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1237__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1237__b)));
    __Vfunc_aes_mul_gf2p2__1237__Vfuncout = __Vfunc_aes_mul_gf2p2__1237__f;
    __Vfunc_aes_mul_gf2p4__1236__a = __Vfunc_aes_mul_gf2p2__1237__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1238__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1236__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1236__delta)));
    __Vfunc_aes_mul_gf2p2__1238__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1236__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1236__gamma)));
    __Vfunc_aes_mul_gf2p2__1238__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1238__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1238__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1238__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1238__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1238__d)));
    __Vfunc_aes_mul_gf2p2__1238__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1238__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1238__d)));
    __Vfunc_aes_mul_gf2p2__1238__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1238__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1238__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1238__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1238__b)));
    __Vfunc_aes_mul_gf2p2__1238__Vfuncout = __Vfunc_aes_mul_gf2p2__1238__f;
    __Vfunc_aes_mul_gf2p4__1236__b = __Vfunc_aes_mul_gf2p2__1238__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1239__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1236__delta));
    __Vfunc_aes_mul_gf2p2__1239__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1236__gamma));
    __Vfunc_aes_mul_gf2p2__1239__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1239__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1239__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1239__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1239__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1239__d)));
    __Vfunc_aes_mul_gf2p2__1239__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1239__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1239__d)));
    __Vfunc_aes_mul_gf2p2__1239__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1239__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1239__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1239__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1239__b)));
    __Vfunc_aes_mul_gf2p2__1239__Vfuncout = __Vfunc_aes_mul_gf2p2__1239__f;
    __Vfunc_aes_mul_gf2p4__1236__c = __Vfunc_aes_mul_gf2p2__1239__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1240__g = __Vfunc_aes_mul_gf2p4__1236__b;
    __Vfunc_aes_scale_omega2_gf2p2__1240__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1240__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1240__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1240__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1240__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1236__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1240__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1241__g = __Vfunc_aes_mul_gf2p4__1236__b;
    __Vfunc_aes_scale_omega2_gf2p2__1241__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1241__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1241__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1241__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1241__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1236__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1241__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1236__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1236__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1268__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1268__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1268__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1268__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1268__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1268__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1268__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1268__d)));
    __Vfunc_aes_mul_gf2p2__1268__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1268__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1268__d)));
    __Vfunc_aes_mul_gf2p2__1268__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1268__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1268__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1268__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1268__b)));
    __Vfunc_aes_mul_gf2p2__1268__Vfuncout = __Vfunc_aes_mul_gf2p2__1268__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1268__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1269__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1269__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__1269__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1269__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1269__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1269__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1269__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1269__d)));
    __Vfunc_aes_mul_gf2p2__1269__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1269__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1269__d)));
    __Vfunc_aes_mul_gf2p2__1269__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1269__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1269__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1269__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1269__b)));
    __Vfunc_aes_mul_gf2p2__1269__Vfuncout = __Vfunc_aes_mul_gf2p2__1269__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1269__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__83(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__83\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1210__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1210__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1210__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1211__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1211__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1211__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1212__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1212__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1212__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1213__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1213__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1213__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1214__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1214__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1214__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1215__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1215__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1215__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1216__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1216__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1216__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1217__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1217__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1217__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1218__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1218__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1218__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1219__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1219__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1219__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1220__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1220__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1220__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1221__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1221__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1221__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1224__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1224__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1224__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1225__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1225__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1228__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1228__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1228__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1229__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1229__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1246__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1246__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1247__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1247__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1252__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1252__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1253__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1253__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1282__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1282__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1283__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1283__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1288__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1288__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1289__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1289__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__d;
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
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1212__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1212__vec_c = 0U;
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1212__Vfuncout = __Vfunc_aes_mvm__1212__vec_c;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1211__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][3U] 
                                                   >> 0x10U))));
    __Vfunc_aes_mvm__1211__vec_c = 0U;
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1211__Vfuncout = __Vfunc_aes_mvm__1211__vec_c;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1210__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1210__vec_c = 0U;
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1210__Vfuncout = __Vfunc_aes_mvm__1210__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1210__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1211__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1212__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1215__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1215__vec_c = 0U;
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1215__Vfuncout = __Vfunc_aes_mvm__1215__vec_c;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1214__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1214__vec_c = 0U;
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1214__Vfuncout = __Vfunc_aes_mvm__1214__vec_c;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1213__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1213__vec_c = 0U;
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1213__Vfuncout = __Vfunc_aes_mvm__1213__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1213__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1214__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1215__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma)));
    __Vfunc_aes_square_gf2p2__1223__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma));
    __Vfunc_aes_square_gf2p2__1223__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1223__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1223__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1223__Vfuncout = __Vfunc_aes_square_gf2p2__1223__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b = __Vfunc_aes_square_gf2p2__1223__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1225__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b;
    __Vfunc_aes_scale_omega_gf2p2__1225__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1225__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1225__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1225__d;
    __Vfunc_aes_square_gf2p2__1224__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a;
    __Vfunc_aes_square_gf2p2__1224__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1224__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1224__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1224__Vfuncout = __Vfunc_aes_square_gf2p2__1224__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1224__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma)));
    __Vfunc_aes_square_gf2p2__1227__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma));
    __Vfunc_aes_square_gf2p2__1227__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1227__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1227__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1227__Vfuncout = __Vfunc_aes_square_gf2p2__1227__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b = __Vfunc_aes_square_gf2p2__1227__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1229__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b;
    __Vfunc_aes_scale_omega_gf2p2__1229__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1229__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1229__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1229__d;
    __Vfunc_aes_square_gf2p2__1228__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a;
    __Vfunc_aes_square_gf2p2__1228__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1228__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1228__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1228__Vfuncout = __Vfunc_aes_square_gf2p2__1228__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1228__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1242__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1242__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1243__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1242__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1243__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1242__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1243__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1243__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1243__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1243__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1243__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1243__d)));
    __Vfunc_aes_mul_gf2p2__1243__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1243__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1243__d)));
    __Vfunc_aes_mul_gf2p2__1243__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1243__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1243__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1243__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1243__b)));
    __Vfunc_aes_mul_gf2p2__1243__Vfuncout = __Vfunc_aes_mul_gf2p2__1243__f;
    __Vfunc_aes_mul_gf2p4__1242__a = __Vfunc_aes_mul_gf2p2__1243__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1244__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1242__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1242__delta)));
    __Vfunc_aes_mul_gf2p2__1244__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1242__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1242__gamma)));
    __Vfunc_aes_mul_gf2p2__1244__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1244__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1244__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1244__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1244__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1244__d)));
    __Vfunc_aes_mul_gf2p2__1244__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1244__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1244__d)));
    __Vfunc_aes_mul_gf2p2__1244__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1244__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1244__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1244__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1244__b)));
    __Vfunc_aes_mul_gf2p2__1244__Vfuncout = __Vfunc_aes_mul_gf2p2__1244__f;
    __Vfunc_aes_mul_gf2p4__1242__b = __Vfunc_aes_mul_gf2p2__1244__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1245__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1242__delta));
    __Vfunc_aes_mul_gf2p2__1245__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1242__gamma));
    __Vfunc_aes_mul_gf2p2__1245__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1245__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1245__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1245__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1245__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1245__d)));
    __Vfunc_aes_mul_gf2p2__1245__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1245__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1245__d)));
    __Vfunc_aes_mul_gf2p2__1245__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1245__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1245__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1245__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1245__b)));
    __Vfunc_aes_mul_gf2p2__1245__Vfuncout = __Vfunc_aes_mul_gf2p2__1245__f;
    __Vfunc_aes_mul_gf2p4__1242__c = __Vfunc_aes_mul_gf2p2__1245__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1246__g = __Vfunc_aes_mul_gf2p4__1242__b;
    __Vfunc_aes_scale_omega2_gf2p2__1246__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1246__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1246__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1246__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1242__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1247__g = __Vfunc_aes_mul_gf2p4__1242__b;
    __Vfunc_aes_scale_omega2_gf2p2__1247__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1247__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1247__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1247__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1242__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1242__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1242__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1248__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1248__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1249__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1248__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1249__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1248__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1249__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1249__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1249__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1249__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1249__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1249__d)));
    __Vfunc_aes_mul_gf2p2__1249__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1249__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1249__d)));
    __Vfunc_aes_mul_gf2p2__1249__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1249__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1249__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1249__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1249__b)));
    __Vfunc_aes_mul_gf2p2__1249__Vfuncout = __Vfunc_aes_mul_gf2p2__1249__f;
    __Vfunc_aes_mul_gf2p4__1248__a = __Vfunc_aes_mul_gf2p2__1249__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1250__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1248__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1248__delta)));
    __Vfunc_aes_mul_gf2p2__1250__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1248__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1248__gamma)));
    __Vfunc_aes_mul_gf2p2__1250__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1250__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1250__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1250__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1250__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1250__d)));
    __Vfunc_aes_mul_gf2p2__1250__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1250__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1250__d)));
    __Vfunc_aes_mul_gf2p2__1250__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1250__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1250__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1250__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1250__b)));
    __Vfunc_aes_mul_gf2p2__1250__Vfuncout = __Vfunc_aes_mul_gf2p2__1250__f;
    __Vfunc_aes_mul_gf2p4__1248__b = __Vfunc_aes_mul_gf2p2__1250__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1251__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1248__delta));
    __Vfunc_aes_mul_gf2p2__1251__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1248__gamma));
    __Vfunc_aes_mul_gf2p2__1251__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1251__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1251__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1251__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1251__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1251__d)));
    __Vfunc_aes_mul_gf2p2__1251__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1251__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1251__d)));
    __Vfunc_aes_mul_gf2p2__1251__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1251__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1251__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1251__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1251__b)));
    __Vfunc_aes_mul_gf2p2__1251__Vfuncout = __Vfunc_aes_mul_gf2p2__1251__f;
    __Vfunc_aes_mul_gf2p4__1248__c = __Vfunc_aes_mul_gf2p2__1251__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1252__g = __Vfunc_aes_mul_gf2p4__1248__b;
    __Vfunc_aes_scale_omega2_gf2p2__1252__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1252__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1252__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1252__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1248__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1253__g = __Vfunc_aes_mul_gf2p4__1248__b;
    __Vfunc_aes_scale_omega2_gf2p2__1253__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1253__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1253__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1253__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1248__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1248__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1248__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1266__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1266__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1266__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1266__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1266__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1266__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1266__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1266__d)));
    __Vfunc_aes_mul_gf2p2__1266__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1266__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1266__d)));
    __Vfunc_aes_mul_gf2p2__1266__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1266__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1266__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1266__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1266__b)));
    __Vfunc_aes_mul_gf2p2__1266__Vfuncout = __Vfunc_aes_mul_gf2p2__1266__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1266__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1267__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1267__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1267__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1267__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1267__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1267__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1267__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1267__d)));
    __Vfunc_aes_mul_gf2p2__1267__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1267__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1267__d)));
    __Vfunc_aes_mul_gf2p2__1267__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1267__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1267__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1267__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1267__b)));
    __Vfunc_aes_mul_gf2p2__1267__Vfuncout = __Vfunc_aes_mul_gf2p2__1267__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1267__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1270__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1270__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1270__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1270__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1270__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1270__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1270__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1270__d)));
    __Vfunc_aes_mul_gf2p2__1270__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1270__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1270__d)));
    __Vfunc_aes_mul_gf2p2__1270__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1270__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1270__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1270__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1270__b)));
    __Vfunc_aes_mul_gf2p2__1270__Vfuncout = __Vfunc_aes_mul_gf2p2__1270__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1270__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1271__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1271__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1271__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1271__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1271__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1271__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1271__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1271__d)));
    __Vfunc_aes_mul_gf2p2__1271__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1271__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1271__d)));
    __Vfunc_aes_mul_gf2p2__1271__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1271__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1271__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1271__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1271__b)));
    __Vfunc_aes_mul_gf2p2__1271__Vfuncout = __Vfunc_aes_mul_gf2p2__1271__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1271__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1221__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1221__vec_c = 0U;
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1221__Vfuncout = __Vfunc_aes_mvm__1221__vec_c;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1220__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1220__vec_c = 0U;
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1220__Vfuncout = __Vfunc_aes_mvm__1220__vec_c;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1219__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1219__vec_c = 0U;
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1219__Vfuncout = __Vfunc_aes_mvm__1219__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1219__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1220__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1221__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1218__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1218__vec_c = 0U;
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1218__Vfuncout = __Vfunc_aes_mvm__1218__vec_c;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1217__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1217__vec_c = 0U;
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1217__Vfuncout = __Vfunc_aes_mvm__1217__vec_c;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1216__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1216__vec_c = 0U;
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1216__Vfuncout = __Vfunc_aes_mvm__1216__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1216__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1217__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1218__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__1262__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1262__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1262__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1262__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1262__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1262__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1262__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1262__d)));
    __Vfunc_aes_mul_gf2p2__1262__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1262__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1262__d)));
    __Vfunc_aes_mul_gf2p2__1262__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1262__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1262__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1262__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1262__b)));
    __Vfunc_aes_mul_gf2p2__1262__Vfuncout = __Vfunc_aes_mul_gf2p2__1262__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1262__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1263__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1263__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1263__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1263__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1263__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1263__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1263__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1263__d)));
    __Vfunc_aes_mul_gf2p2__1263__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1263__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1263__d)));
    __Vfunc_aes_mul_gf2p2__1263__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1263__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1263__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1263__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1263__b)));
    __Vfunc_aes_mul_gf2p2__1263__Vfuncout = __Vfunc_aes_mul_gf2p2__1263__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1263__Vfuncout;
    __Vfunc_aes_square_gf2p2__1255__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1255__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1255__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1255__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1255__Vfuncout = __Vfunc_aes_square_gf2p2__1255__d;
    __Vfunc_aes_scale_omega2_gf2p2__1254__g = __Vfunc_aes_square_gf2p2__1255__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1254__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1254__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1254__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1254__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout;
    __Vfunc_aes_square_gf2p2__1257__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1257__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1257__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1257__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1257__Vfuncout = __Vfunc_aes_square_gf2p2__1257__d;
    __Vfunc_aes_scale_omega2_gf2p2__1256__g = __Vfunc_aes_square_gf2p2__1257__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1256__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1256__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1256__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1256__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1278__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1278__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1279__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1278__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1279__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1278__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1279__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1279__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1279__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1279__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1279__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1279__d)));
    __Vfunc_aes_mul_gf2p2__1279__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1279__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1279__d)));
    __Vfunc_aes_mul_gf2p2__1279__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1279__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1279__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1279__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1279__b)));
    __Vfunc_aes_mul_gf2p2__1279__Vfuncout = __Vfunc_aes_mul_gf2p2__1279__f;
    __Vfunc_aes_mul_gf2p4__1278__a = __Vfunc_aes_mul_gf2p2__1279__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1280__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1278__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1278__delta)));
    __Vfunc_aes_mul_gf2p2__1280__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1278__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1278__gamma)));
    __Vfunc_aes_mul_gf2p2__1280__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1280__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1280__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1280__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1280__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1280__d)));
    __Vfunc_aes_mul_gf2p2__1280__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1280__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1280__d)));
    __Vfunc_aes_mul_gf2p2__1280__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1280__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1280__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1280__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1280__b)));
    __Vfunc_aes_mul_gf2p2__1280__Vfuncout = __Vfunc_aes_mul_gf2p2__1280__f;
    __Vfunc_aes_mul_gf2p4__1278__b = __Vfunc_aes_mul_gf2p2__1280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1281__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1278__delta));
    __Vfunc_aes_mul_gf2p2__1281__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1278__gamma));
    __Vfunc_aes_mul_gf2p2__1281__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1281__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1281__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1281__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1281__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1281__d)));
    __Vfunc_aes_mul_gf2p2__1281__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1281__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1281__d)));
    __Vfunc_aes_mul_gf2p2__1281__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1281__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1281__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1281__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1281__b)));
    __Vfunc_aes_mul_gf2p2__1281__Vfuncout = __Vfunc_aes_mul_gf2p2__1281__f;
    __Vfunc_aes_mul_gf2p4__1278__c = __Vfunc_aes_mul_gf2p2__1281__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1282__g = __Vfunc_aes_mul_gf2p4__1278__b;
    __Vfunc_aes_scale_omega2_gf2p2__1282__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1282__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1282__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1282__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1278__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1283__g = __Vfunc_aes_mul_gf2p4__1278__b;
    __Vfunc_aes_scale_omega2_gf2p2__1283__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1283__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1283__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1283__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1278__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1278__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1278__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1284__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1284__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1285__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1284__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1285__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1284__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1285__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1285__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1285__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1285__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1285__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1285__d)));
    __Vfunc_aes_mul_gf2p2__1285__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1285__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1285__d)));
    __Vfunc_aes_mul_gf2p2__1285__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1285__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1285__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1285__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1285__b)));
    __Vfunc_aes_mul_gf2p2__1285__Vfuncout = __Vfunc_aes_mul_gf2p2__1285__f;
    __Vfunc_aes_mul_gf2p4__1284__a = __Vfunc_aes_mul_gf2p2__1285__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1286__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1284__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1284__delta)));
    __Vfunc_aes_mul_gf2p2__1286__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1284__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1284__gamma)));
    __Vfunc_aes_mul_gf2p2__1286__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1286__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1286__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1286__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1286__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1286__d)));
    __Vfunc_aes_mul_gf2p2__1286__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1286__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1286__d)));
    __Vfunc_aes_mul_gf2p2__1286__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1286__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1286__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1286__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1286__b)));
    __Vfunc_aes_mul_gf2p2__1286__Vfuncout = __Vfunc_aes_mul_gf2p2__1286__f;
    __Vfunc_aes_mul_gf2p4__1284__b = __Vfunc_aes_mul_gf2p2__1286__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1287__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1284__delta));
    __Vfunc_aes_mul_gf2p2__1287__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1284__gamma));
    __Vfunc_aes_mul_gf2p2__1287__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1287__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1287__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1287__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1287__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1287__d)));
    __Vfunc_aes_mul_gf2p2__1287__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1287__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1287__d)));
    __Vfunc_aes_mul_gf2p2__1287__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1287__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1287__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1287__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1287__b)));
    __Vfunc_aes_mul_gf2p2__1287__Vfuncout = __Vfunc_aes_mul_gf2p2__1287__f;
    __Vfunc_aes_mul_gf2p4__1284__c = __Vfunc_aes_mul_gf2p2__1287__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1288__g = __Vfunc_aes_mul_gf2p4__1284__b;
    __Vfunc_aes_scale_omega2_gf2p2__1288__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1288__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1288__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1288__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1284__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1289__g = __Vfunc_aes_mul_gf2p4__1284__b;
    __Vfunc_aes_scale_omega2_gf2p2__1289__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1289__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1289__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1289__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1284__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1284__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1284__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1302__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1302__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1303__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1302__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1303__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1302__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1303__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1303__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1303__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1303__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1303__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1303__d)));
    __Vfunc_aes_mul_gf2p2__1303__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1303__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1303__d)));
    __Vfunc_aes_mul_gf2p2__1303__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1303__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1303__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1303__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1303__b)));
    __Vfunc_aes_mul_gf2p2__1303__Vfuncout = __Vfunc_aes_mul_gf2p2__1303__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__a = __Vfunc_aes_mul_gf2p2__1303__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1304__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1302__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1302__delta)));
    __Vfunc_aes_mul_gf2p2__1304__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1302__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1302__gamma)));
    __Vfunc_aes_mul_gf2p2__1304__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1304__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1304__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1304__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1304__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1304__d)));
    __Vfunc_aes_mul_gf2p2__1304__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1304__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1304__d)));
    __Vfunc_aes_mul_gf2p2__1304__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1304__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1304__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1304__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1304__b)));
    __Vfunc_aes_mul_gf2p2__1304__Vfuncout = __Vfunc_aes_mul_gf2p2__1304__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__b = __Vfunc_aes_mul_gf2p2__1304__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1305__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1302__delta));
    __Vfunc_aes_mul_gf2p2__1305__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1302__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1305__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1305__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1305__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1305__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1305__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1305__d)));
}
