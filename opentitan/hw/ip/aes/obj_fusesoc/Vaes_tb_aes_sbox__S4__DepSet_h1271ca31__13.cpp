// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__54(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__54\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1450__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1450__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1450__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1450__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1450__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1450__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1451__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1451__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1451__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1452__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1452__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1452__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1453__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1453__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1453__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1454__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1454__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1454__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1455__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1455__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1455__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1456__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1456__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1456__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1456__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1456__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1456__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1457__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1457__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1457__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1458__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1458__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1458__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1459__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1459__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1459__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1460__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1460__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1460__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1461__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1461__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1461__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1480__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1480__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1480__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1481__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1481__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1481__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1484__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1484__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1484__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1485__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1485__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1485__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1488__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1488__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1488__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1489__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1489__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1489__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[6U] 
                          << 0x10U)) | ((0xf0000U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[6U] 
                                          << 4U)) | 
                                        ((0xff00U & 
                                          (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[6U] 
                                           >> 8U)) 
                                         | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[6U] 
                                            >> 0x18U))));
    __Vfunc_aes_mul_gf2p2__1480__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1480__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1480__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1480__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1480__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1480__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1480__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1480__d)));
    __Vfunc_aes_mul_gf2p2__1480__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1480__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1480__d)));
    __Vfunc_aes_mul_gf2p2__1480__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1480__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1480__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1480__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1480__b)));
    __Vfunc_aes_mul_gf2p2__1480__Vfuncout = __Vfunc_aes_mul_gf2p2__1480__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1480__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1481__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1481__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1481__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1481__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1481__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1481__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1481__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1481__d)));
    __Vfunc_aes_mul_gf2p2__1481__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1481__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1481__d)));
    __Vfunc_aes_mul_gf2p2__1481__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1481__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1481__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1481__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1481__b)));
    __Vfunc_aes_mul_gf2p2__1481__Vfuncout = __Vfunc_aes_mul_gf2p2__1481__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1481__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1484__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1484__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1484__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1484__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1484__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1484__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1484__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1484__d)));
    __Vfunc_aes_mul_gf2p2__1484__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1484__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1484__d)));
    __Vfunc_aes_mul_gf2p2__1484__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1484__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1484__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1484__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1484__b)));
    __Vfunc_aes_mul_gf2p2__1484__Vfuncout = __Vfunc_aes_mul_gf2p2__1484__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1484__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1485__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1485__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1485__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1485__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1485__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1485__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1485__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1485__d)));
    __Vfunc_aes_mul_gf2p2__1485__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1485__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1485__d)));
    __Vfunc_aes_mul_gf2p2__1485__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1485__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1485__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1485__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1485__b)));
    __Vfunc_aes_mul_gf2p2__1485__Vfuncout = __Vfunc_aes_mul_gf2p2__1485__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1485__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1450__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1450__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1451__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1450__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1451__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1450__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1451__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1451__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1451__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1451__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1451__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1451__d)));
    __Vfunc_aes_mul_gf2p2__1451__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1451__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1451__d)));
    __Vfunc_aes_mul_gf2p2__1451__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1451__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1451__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1451__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1451__b)));
    __Vfunc_aes_mul_gf2p2__1451__Vfuncout = __Vfunc_aes_mul_gf2p2__1451__f;
    __Vfunc_aes_mul_gf2p4__1450__a = __Vfunc_aes_mul_gf2p2__1451__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1452__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1450__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1450__delta)));
    __Vfunc_aes_mul_gf2p2__1452__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1450__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1450__gamma)));
    __Vfunc_aes_mul_gf2p2__1452__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1452__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1452__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1452__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1452__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1452__d)));
    __Vfunc_aes_mul_gf2p2__1452__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1452__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1452__d)));
    __Vfunc_aes_mul_gf2p2__1452__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1452__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1452__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1452__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1452__b)));
    __Vfunc_aes_mul_gf2p2__1452__Vfuncout = __Vfunc_aes_mul_gf2p2__1452__f;
    __Vfunc_aes_mul_gf2p4__1450__b = __Vfunc_aes_mul_gf2p2__1452__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1453__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1450__delta));
    __Vfunc_aes_mul_gf2p2__1453__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1450__gamma));
    __Vfunc_aes_mul_gf2p2__1453__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1453__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1453__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1453__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1453__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1453__d)));
    __Vfunc_aes_mul_gf2p2__1453__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1453__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1453__d)));
    __Vfunc_aes_mul_gf2p2__1453__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1453__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1453__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1453__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1453__b)));
    __Vfunc_aes_mul_gf2p2__1453__Vfuncout = __Vfunc_aes_mul_gf2p2__1453__f;
    __Vfunc_aes_mul_gf2p4__1450__c = __Vfunc_aes_mul_gf2p2__1453__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1454__g = __Vfunc_aes_mul_gf2p4__1450__b;
    __Vfunc_aes_scale_omega2_gf2p2__1454__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1454__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1454__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1454__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1454__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1450__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1454__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1455__g = __Vfunc_aes_mul_gf2p4__1450__b;
    __Vfunc_aes_scale_omega2_gf2p2__1455__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1455__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1455__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1455__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1455__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1450__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1455__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1450__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1450__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1456__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1456__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1457__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1456__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1457__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1456__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1457__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1457__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1457__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1457__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1457__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1457__d)));
    __Vfunc_aes_mul_gf2p2__1457__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1457__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1457__d)));
    __Vfunc_aes_mul_gf2p2__1457__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1457__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1457__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1457__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1457__b)));
    __Vfunc_aes_mul_gf2p2__1457__Vfuncout = __Vfunc_aes_mul_gf2p2__1457__f;
    __Vfunc_aes_mul_gf2p4__1456__a = __Vfunc_aes_mul_gf2p2__1457__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1458__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1456__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1456__delta)));
    __Vfunc_aes_mul_gf2p2__1458__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1456__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1456__gamma)));
    __Vfunc_aes_mul_gf2p2__1458__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1458__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1458__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1458__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1458__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1458__d)));
    __Vfunc_aes_mul_gf2p2__1458__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1458__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1458__d)));
    __Vfunc_aes_mul_gf2p2__1458__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1458__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1458__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1458__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1458__b)));
    __Vfunc_aes_mul_gf2p2__1458__Vfuncout = __Vfunc_aes_mul_gf2p2__1458__f;
    __Vfunc_aes_mul_gf2p4__1456__b = __Vfunc_aes_mul_gf2p2__1458__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1459__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1456__delta));
    __Vfunc_aes_mul_gf2p2__1459__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1456__gamma));
    __Vfunc_aes_mul_gf2p2__1459__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1459__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1459__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1459__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1459__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1459__d)));
    __Vfunc_aes_mul_gf2p2__1459__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1459__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1459__d)));
    __Vfunc_aes_mul_gf2p2__1459__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1459__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1459__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1459__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1459__b)));
    __Vfunc_aes_mul_gf2p2__1459__Vfuncout = __Vfunc_aes_mul_gf2p2__1459__f;
    __Vfunc_aes_mul_gf2p4__1456__c = __Vfunc_aes_mul_gf2p2__1459__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1460__g = __Vfunc_aes_mul_gf2p4__1456__b;
    __Vfunc_aes_scale_omega2_gf2p2__1460__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1460__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1460__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1460__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1460__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1456__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1460__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1461__g = __Vfunc_aes_mul_gf2p4__1456__b;
    __Vfunc_aes_scale_omega2_gf2p2__1461__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1461__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1461__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1461__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1461__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1456__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1461__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1456__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1456__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1488__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1488__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1488__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1488__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1488__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1488__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1488__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1488__d)));
    __Vfunc_aes_mul_gf2p2__1488__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1488__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1488__d)));
    __Vfunc_aes_mul_gf2p2__1488__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1488__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1488__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1488__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1488__b)));
    __Vfunc_aes_mul_gf2p2__1488__Vfuncout = __Vfunc_aes_mul_gf2p2__1488__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1488__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1489__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1489__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__1489__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1489__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1489__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1489__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1489__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1489__d)));
    __Vfunc_aes_mul_gf2p2__1489__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1489__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1489__d)));
    __Vfunc_aes_mul_gf2p2__1489__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1489__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1489__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1489__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1489__b)));
    __Vfunc_aes_mul_gf2p2__1489__Vfuncout = __Vfunc_aes_mul_gf2p2__1489__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1489__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__87(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__87\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1430__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1430__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1430__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1431__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1431__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1431__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1432__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1432__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1432__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1433__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1433__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1433__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1434__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1434__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1434__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1435__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1435__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1435__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1436__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1436__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1436__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1437__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1437__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1437__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1438__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1438__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1438__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1439__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1439__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1439__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1440__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1440__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1440__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1441__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1441__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1441__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1443__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1443__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1443__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1444__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1444__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1444__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1445__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1445__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1445__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1447__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1447__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1447__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1448__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1448__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1448__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1449__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1449__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1449__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1462__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1462__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1462__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1462__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1462__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1462__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1463__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1463__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1463__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1464__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1464__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1464__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1465__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1465__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1465__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1466__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1466__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1466__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1467__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1467__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1467__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1468__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1468__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1468__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1468__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1468__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1468__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1469__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1469__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1469__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1470__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1470__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1470__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1471__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1471__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1471__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1472__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1472__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1472__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1473__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1473__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1473__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1474__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1474__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1475__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1475__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1475__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1476__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1476__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1477__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1477__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1477__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1482__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1482__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1482__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1483__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1483__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1483__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1486__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1486__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1486__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1487__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1487__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1487__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1490__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1490__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1490__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1491__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1491__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1491__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1498__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1498__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1498__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1498__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1498__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1498__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1499__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1499__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1499__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1500__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1500__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1500__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1501__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1501__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1501__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1502__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1502__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1502__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1503__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1503__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1503__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1504__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1504__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1504__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1504__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1504__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1504__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1505__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1505__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1505__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1506__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1506__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1506__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1507__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1507__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1507__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1508__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1508__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1508__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1509__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1509__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1509__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1522__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1522__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1523__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1523__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1523__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1524__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1524__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1524__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__d;
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
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1432__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1432__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][1U] >> 0x18U);
    __Vfunc_aes_mvm__1432__vec_c = 0U;
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1432__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1432__vec_b)))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1432__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1432__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1432__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1432__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1432__Vfuncout = __Vfunc_aes_mvm__1432__vec_c;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1431__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1431__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][1U] 
                                                   >> 0x18U))));
    __Vfunc_aes_mvm__1431__vec_c = 0U;
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1431__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1431__vec_b)))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1431__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1431__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1431__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1431__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1431__Vfuncout = __Vfunc_aes_mvm__1431__vec_c;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1430__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1430__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][1U] >> 0x18U);
    __Vfunc_aes_mvm__1430__vec_c = 0U;
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1430__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1430__vec_b)))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1430__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1430__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1430__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1430__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1430__Vfuncout = __Vfunc_aes_mvm__1430__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1430__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1431__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1432__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1435__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1435__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][1U] >> 0x18U);
    __Vfunc_aes_mvm__1435__vec_c = 0U;
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1435__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1435__vec_b)))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1435__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1435__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1435__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1435__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1435__Vfuncout = __Vfunc_aes_mvm__1435__vec_c;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1434__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1434__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][1U] >> 0x18U);
    __Vfunc_aes_mvm__1434__vec_c = 0U;
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1434__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1434__vec_b)))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1434__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1434__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1434__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1434__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1434__Vfuncout = __Vfunc_aes_mvm__1434__vec_c;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1433__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1433__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][1U] >> 0x18U);
    __Vfunc_aes_mvm__1433__vec_c = 0U;
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1433__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1433__vec_b)))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1433__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1433__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1433__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1433__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1433__Vfuncout = __Vfunc_aes_mvm__1433__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1433__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1434__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1435__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma)));
    __Vfunc_aes_square_gf2p2__1443__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma));
    __Vfunc_aes_square_gf2p2__1443__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1443__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1443__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1443__Vfuncout = __Vfunc_aes_square_gf2p2__1443__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b = __Vfunc_aes_square_gf2p2__1443__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1445__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b;
    __Vfunc_aes_scale_omega_gf2p2__1445__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1445__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1445__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1445__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1445__d;
    __Vfunc_aes_square_gf2p2__1444__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a;
    __Vfunc_aes_square_gf2p2__1444__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1444__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1444__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1444__Vfuncout = __Vfunc_aes_square_gf2p2__1444__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1444__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1445__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma)));
    __Vfunc_aes_square_gf2p2__1447__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma));
    __Vfunc_aes_square_gf2p2__1447__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1447__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1447__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1447__Vfuncout = __Vfunc_aes_square_gf2p2__1447__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b = __Vfunc_aes_square_gf2p2__1447__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1449__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b;
    __Vfunc_aes_scale_omega_gf2p2__1449__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1449__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1449__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1449__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1449__d;
    __Vfunc_aes_square_gf2p2__1448__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a;
    __Vfunc_aes_square_gf2p2__1448__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1448__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1448__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1448__Vfuncout = __Vfunc_aes_square_gf2p2__1448__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1448__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1449__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1462__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1462__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1463__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1462__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1463__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1462__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1463__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1463__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1463__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1463__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1463__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1463__d)));
    __Vfunc_aes_mul_gf2p2__1463__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1463__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1463__d)));
    __Vfunc_aes_mul_gf2p2__1463__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1463__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1463__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1463__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1463__b)));
    __Vfunc_aes_mul_gf2p2__1463__Vfuncout = __Vfunc_aes_mul_gf2p2__1463__f;
    __Vfunc_aes_mul_gf2p4__1462__a = __Vfunc_aes_mul_gf2p2__1463__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1464__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1462__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1462__delta)));
    __Vfunc_aes_mul_gf2p2__1464__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1462__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1462__gamma)));
    __Vfunc_aes_mul_gf2p2__1464__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1464__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1464__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1464__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1464__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1464__d)));
    __Vfunc_aes_mul_gf2p2__1464__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1464__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1464__d)));
    __Vfunc_aes_mul_gf2p2__1464__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1464__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1464__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1464__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1464__b)));
    __Vfunc_aes_mul_gf2p2__1464__Vfuncout = __Vfunc_aes_mul_gf2p2__1464__f;
    __Vfunc_aes_mul_gf2p4__1462__b = __Vfunc_aes_mul_gf2p2__1464__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1465__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1462__delta));
    __Vfunc_aes_mul_gf2p2__1465__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1462__gamma));
    __Vfunc_aes_mul_gf2p2__1465__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1465__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1465__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1465__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1465__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1465__d)));
    __Vfunc_aes_mul_gf2p2__1465__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1465__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1465__d)));
    __Vfunc_aes_mul_gf2p2__1465__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1465__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1465__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1465__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1465__b)));
    __Vfunc_aes_mul_gf2p2__1465__Vfuncout = __Vfunc_aes_mul_gf2p2__1465__f;
    __Vfunc_aes_mul_gf2p4__1462__c = __Vfunc_aes_mul_gf2p2__1465__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1466__g = __Vfunc_aes_mul_gf2p4__1462__b;
    __Vfunc_aes_scale_omega2_gf2p2__1466__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1466__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1466__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1466__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1466__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1462__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1466__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1467__g = __Vfunc_aes_mul_gf2p4__1462__b;
    __Vfunc_aes_scale_omega2_gf2p2__1467__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1467__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1467__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1467__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1467__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1462__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1467__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1462__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1462__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1468__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1468__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1469__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1468__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1469__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1468__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1469__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1469__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1469__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1469__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1469__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1469__d)));
    __Vfunc_aes_mul_gf2p2__1469__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1469__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1469__d)));
    __Vfunc_aes_mul_gf2p2__1469__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1469__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1469__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1469__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1469__b)));
    __Vfunc_aes_mul_gf2p2__1469__Vfuncout = __Vfunc_aes_mul_gf2p2__1469__f;
    __Vfunc_aes_mul_gf2p4__1468__a = __Vfunc_aes_mul_gf2p2__1469__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1470__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1468__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1468__delta)));
    __Vfunc_aes_mul_gf2p2__1470__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1468__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1468__gamma)));
    __Vfunc_aes_mul_gf2p2__1470__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1470__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1470__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1470__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1470__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1470__d)));
    __Vfunc_aes_mul_gf2p2__1470__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1470__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1470__d)));
    __Vfunc_aes_mul_gf2p2__1470__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1470__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1470__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1470__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1470__b)));
    __Vfunc_aes_mul_gf2p2__1470__Vfuncout = __Vfunc_aes_mul_gf2p2__1470__f;
    __Vfunc_aes_mul_gf2p4__1468__b = __Vfunc_aes_mul_gf2p2__1470__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1471__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1468__delta));
    __Vfunc_aes_mul_gf2p2__1471__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1468__gamma));
    __Vfunc_aes_mul_gf2p2__1471__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1471__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1471__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1471__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1471__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1471__d)));
    __Vfunc_aes_mul_gf2p2__1471__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1471__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1471__d)));
    __Vfunc_aes_mul_gf2p2__1471__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1471__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1471__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1471__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1471__b)));
    __Vfunc_aes_mul_gf2p2__1471__Vfuncout = __Vfunc_aes_mul_gf2p2__1471__f;
    __Vfunc_aes_mul_gf2p4__1468__c = __Vfunc_aes_mul_gf2p2__1471__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1472__g = __Vfunc_aes_mul_gf2p4__1468__b;
    __Vfunc_aes_scale_omega2_gf2p2__1472__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1472__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1472__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1472__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1472__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1468__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1472__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1473__g = __Vfunc_aes_mul_gf2p4__1468__b;
    __Vfunc_aes_scale_omega2_gf2p2__1473__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1473__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1473__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1473__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1473__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1468__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1473__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1468__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1468__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1486__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1486__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1486__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1486__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1486__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1486__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1486__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1486__d)));
    __Vfunc_aes_mul_gf2p2__1486__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1486__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1486__d)));
    __Vfunc_aes_mul_gf2p2__1486__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1486__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1486__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1486__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1486__b)));
    __Vfunc_aes_mul_gf2p2__1486__Vfuncout = __Vfunc_aes_mul_gf2p2__1486__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1486__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1487__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1487__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1487__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1487__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1487__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1487__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1487__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1487__d)));
    __Vfunc_aes_mul_gf2p2__1487__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1487__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1487__d)));
    __Vfunc_aes_mul_gf2p2__1487__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1487__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1487__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1487__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1487__b)));
    __Vfunc_aes_mul_gf2p2__1487__Vfuncout = __Vfunc_aes_mul_gf2p2__1487__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1487__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1490__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1490__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1490__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1490__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1490__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1490__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1490__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1490__d)));
    __Vfunc_aes_mul_gf2p2__1490__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1490__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1490__d)));
    __Vfunc_aes_mul_gf2p2__1490__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1490__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1490__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1490__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1490__b)));
    __Vfunc_aes_mul_gf2p2__1490__Vfuncout = __Vfunc_aes_mul_gf2p2__1490__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1490__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1491__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1491__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1491__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1491__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1491__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1491__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1491__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1491__d)));
    __Vfunc_aes_mul_gf2p2__1491__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1491__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1491__d)));
    __Vfunc_aes_mul_gf2p2__1491__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1491__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1491__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1491__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1491__b)));
    __Vfunc_aes_mul_gf2p2__1491__Vfuncout = __Vfunc_aes_mul_gf2p2__1491__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1491__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1441__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1441__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1441__vec_c = 0U;
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1441__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1441__vec_b)))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1441__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1441__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1441__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1441__Vfuncout = __Vfunc_aes_mvm__1441__vec_c;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1440__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1440__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1440__vec_c = 0U;
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1440__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1440__vec_b)))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1440__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1440__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1440__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1440__Vfuncout = __Vfunc_aes_mvm__1440__vec_c;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1439__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1439__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1439__vec_c = 0U;
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1439__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1439__vec_b)))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1439__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1439__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1439__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1439__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1439__Vfuncout = __Vfunc_aes_mvm__1439__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1439__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1440__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1441__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1438__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1438__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1438__vec_c = 0U;
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1438__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1438__vec_b)))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1438__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1438__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1438__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1438__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1438__Vfuncout = __Vfunc_aes_mvm__1438__vec_c;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1437__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1437__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1437__vec_c = 0U;
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1437__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1437__vec_b)))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1437__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1437__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1437__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1437__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1437__Vfuncout = __Vfunc_aes_mvm__1437__vec_c;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1436__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1436__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1436__vec_c = 0U;
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1436__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1436__vec_b)))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1436__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1436__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1436__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1436__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1436__Vfuncout = __Vfunc_aes_mvm__1436__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1436__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1437__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1438__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__1482__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1482__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1482__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1482__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1482__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1482__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1482__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1482__d)));
    __Vfunc_aes_mul_gf2p2__1482__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1482__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1482__d)));
    __Vfunc_aes_mul_gf2p2__1482__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1482__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1482__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1482__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1482__b)));
    __Vfunc_aes_mul_gf2p2__1482__Vfuncout = __Vfunc_aes_mul_gf2p2__1482__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1482__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1483__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1483__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1483__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1483__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1483__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1483__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1483__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1483__d)));
    __Vfunc_aes_mul_gf2p2__1483__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1483__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1483__d)));
    __Vfunc_aes_mul_gf2p2__1483__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1483__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1483__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1483__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1483__b)));
    __Vfunc_aes_mul_gf2p2__1483__Vfuncout = __Vfunc_aes_mul_gf2p2__1483__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1483__Vfuncout;
    __Vfunc_aes_square_gf2p2__1475__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1475__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1475__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1475__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1475__Vfuncout = __Vfunc_aes_square_gf2p2__1475__d;
    __Vfunc_aes_scale_omega2_gf2p2__1474__g = __Vfunc_aes_square_gf2p2__1475__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1474__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1474__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1474__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1474__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout;
    __Vfunc_aes_square_gf2p2__1477__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1477__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1477__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1477__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1477__Vfuncout = __Vfunc_aes_square_gf2p2__1477__d;
    __Vfunc_aes_scale_omega2_gf2p2__1476__g = __Vfunc_aes_square_gf2p2__1477__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1476__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1476__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1476__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1476__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1498__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1498__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1499__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1498__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1499__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1498__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1499__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1499__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1499__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1499__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1499__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1499__d)));
    __Vfunc_aes_mul_gf2p2__1499__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1499__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1499__d)));
    __Vfunc_aes_mul_gf2p2__1499__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1499__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1499__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1499__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1499__b)));
    __Vfunc_aes_mul_gf2p2__1499__Vfuncout = __Vfunc_aes_mul_gf2p2__1499__f;
    __Vfunc_aes_mul_gf2p4__1498__a = __Vfunc_aes_mul_gf2p2__1499__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1500__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1498__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1498__delta)));
    __Vfunc_aes_mul_gf2p2__1500__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1498__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1498__gamma)));
    __Vfunc_aes_mul_gf2p2__1500__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1500__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1500__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1500__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1500__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1500__d)));
    __Vfunc_aes_mul_gf2p2__1500__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1500__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1500__d)));
    __Vfunc_aes_mul_gf2p2__1500__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1500__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1500__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1500__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1500__b)));
    __Vfunc_aes_mul_gf2p2__1500__Vfuncout = __Vfunc_aes_mul_gf2p2__1500__f;
    __Vfunc_aes_mul_gf2p4__1498__b = __Vfunc_aes_mul_gf2p2__1500__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1501__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1498__delta));
    __Vfunc_aes_mul_gf2p2__1501__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1498__gamma));
    __Vfunc_aes_mul_gf2p2__1501__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1501__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1501__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1501__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1501__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1501__d)));
    __Vfunc_aes_mul_gf2p2__1501__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1501__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1501__d)));
    __Vfunc_aes_mul_gf2p2__1501__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1501__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1501__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1501__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1501__b)));
    __Vfunc_aes_mul_gf2p2__1501__Vfuncout = __Vfunc_aes_mul_gf2p2__1501__f;
    __Vfunc_aes_mul_gf2p4__1498__c = __Vfunc_aes_mul_gf2p2__1501__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1502__g = __Vfunc_aes_mul_gf2p4__1498__b;
    __Vfunc_aes_scale_omega2_gf2p2__1502__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1502__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1502__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1502__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1502__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1498__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1502__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1503__g = __Vfunc_aes_mul_gf2p4__1498__b;
    __Vfunc_aes_scale_omega2_gf2p2__1503__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1503__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1503__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1503__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1503__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1498__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1503__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1498__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1498__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1504__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1504__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1505__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1504__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1505__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1504__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1505__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1505__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1505__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1505__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1505__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1505__d)));
    __Vfunc_aes_mul_gf2p2__1505__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1505__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1505__d)));
    __Vfunc_aes_mul_gf2p2__1505__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1505__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1505__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1505__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1505__b)));
    __Vfunc_aes_mul_gf2p2__1505__Vfuncout = __Vfunc_aes_mul_gf2p2__1505__f;
    __Vfunc_aes_mul_gf2p4__1504__a = __Vfunc_aes_mul_gf2p2__1505__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1506__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1504__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1504__delta)));
    __Vfunc_aes_mul_gf2p2__1506__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1504__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1504__gamma)));
    __Vfunc_aes_mul_gf2p2__1506__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1506__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1506__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1506__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1506__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1506__d)));
    __Vfunc_aes_mul_gf2p2__1506__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1506__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1506__d)));
    __Vfunc_aes_mul_gf2p2__1506__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1506__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1506__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1506__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1506__b)));
    __Vfunc_aes_mul_gf2p2__1506__Vfuncout = __Vfunc_aes_mul_gf2p2__1506__f;
    __Vfunc_aes_mul_gf2p4__1504__b = __Vfunc_aes_mul_gf2p2__1506__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1507__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1504__delta));
    __Vfunc_aes_mul_gf2p2__1507__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1504__gamma));
    __Vfunc_aes_mul_gf2p2__1507__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1507__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1507__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1507__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1507__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1507__d)));
    __Vfunc_aes_mul_gf2p2__1507__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1507__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1507__d)));
    __Vfunc_aes_mul_gf2p2__1507__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1507__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1507__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1507__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1507__b)));
    __Vfunc_aes_mul_gf2p2__1507__Vfuncout = __Vfunc_aes_mul_gf2p2__1507__f;
    __Vfunc_aes_mul_gf2p4__1504__c = __Vfunc_aes_mul_gf2p2__1507__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1508__g = __Vfunc_aes_mul_gf2p4__1504__b;
    __Vfunc_aes_scale_omega2_gf2p2__1508__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1508__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1508__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1508__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1508__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1504__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1508__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1509__g = __Vfunc_aes_mul_gf2p4__1504__b;
    __Vfunc_aes_scale_omega2_gf2p2__1509__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1509__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1509__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1509__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1509__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1504__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1509__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1504__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1504__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1522__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1522__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1523__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1522__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1523__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1522__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1523__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1523__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1523__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1523__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1523__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1523__d)));
    __Vfunc_aes_mul_gf2p2__1523__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1523__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1523__d)));
    __Vfunc_aes_mul_gf2p2__1523__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1523__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1523__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1523__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1523__b)));
    __Vfunc_aes_mul_gf2p2__1523__Vfuncout = __Vfunc_aes_mul_gf2p2__1523__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__a = __Vfunc_aes_mul_gf2p2__1523__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1524__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1522__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1522__delta)));
    __Vfunc_aes_mul_gf2p2__1524__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1522__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1522__gamma)));
    __Vfunc_aes_mul_gf2p2__1524__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1524__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1524__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1524__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1524__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1524__d)));
    __Vfunc_aes_mul_gf2p2__1524__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1524__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1524__d)));
    __Vfunc_aes_mul_gf2p2__1524__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1524__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1524__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1524__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1524__b)));
    __Vfunc_aes_mul_gf2p2__1524__Vfuncout = __Vfunc_aes_mul_gf2p2__1524__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__b = __Vfunc_aes_mul_gf2p2__1524__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1525__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1522__delta));
    __Vfunc_aes_mul_gf2p2__1525__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1522__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1525__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1525__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1525__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1525__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1525__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1525__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1525__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1525__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1525__d)));
}
