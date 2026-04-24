// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__45(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__45\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__460__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__460__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__460__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__460__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__460__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__460__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__461__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__461__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__461__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__461__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__462__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__462__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__462__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__462__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__463__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__463__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__463__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__463__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__464__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__464__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__464__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__465__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__465__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__465__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__466__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__466__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__466__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__466__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__466__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__466__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__467__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__467__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__467__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__467__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__468__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__468__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__468__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__468__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__469__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__469__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__469__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__469__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__470__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__470__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__470__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__471__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__471__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__471__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__490__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__490__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__490__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__490__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__491__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__491__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__491__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__491__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__494__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__494__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__494__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__494__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__495__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__495__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__495__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__495__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__498__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__498__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__498__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__498__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__499__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__499__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__499__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__499__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[1U] 
                           << 0x18U) | (0xf00000U & 
                                        (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0U] 
                                         >> 8U)))) 
           | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[1U] 
                           << 0xcU)) | ((0xff00U & 
                                         vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[1U]) 
                                        | (0xffU & 
                                           (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[1U] 
                                            >> 0x10U)))));
    __Vfunc_aes_mul_gf2p2__490__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__490__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__490__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__490__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__490__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__490__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__490__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__490__d)));
    __Vfunc_aes_mul_gf2p2__490__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__490__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__490__d)));
    __Vfunc_aes_mul_gf2p2__490__f = ((((IData)(__Vfunc_aes_mul_gf2p2__490__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__490__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__490__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__490__b)));
    __Vfunc_aes_mul_gf2p2__490__Vfuncout = __Vfunc_aes_mul_gf2p2__490__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__490__Vfuncout;
    __Vfunc_aes_mul_gf2p2__491__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__491__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__491__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__491__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__491__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__491__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__491__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__491__d)));
    __Vfunc_aes_mul_gf2p2__491__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__491__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__491__d)));
    __Vfunc_aes_mul_gf2p2__491__f = ((((IData)(__Vfunc_aes_mul_gf2p2__491__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__491__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__491__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__491__b)));
    __Vfunc_aes_mul_gf2p2__491__Vfuncout = __Vfunc_aes_mul_gf2p2__491__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__491__Vfuncout;
    __Vfunc_aes_mul_gf2p2__494__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__494__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__494__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__494__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__494__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__494__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__494__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__494__d)));
    __Vfunc_aes_mul_gf2p2__494__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__494__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__494__d)));
    __Vfunc_aes_mul_gf2p2__494__f = ((((IData)(__Vfunc_aes_mul_gf2p2__494__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__494__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__494__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__494__b)));
    __Vfunc_aes_mul_gf2p2__494__Vfuncout = __Vfunc_aes_mul_gf2p2__494__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__494__Vfuncout;
    __Vfunc_aes_mul_gf2p2__495__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__495__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__495__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__495__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__495__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__495__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__495__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__495__d)));
    __Vfunc_aes_mul_gf2p2__495__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__495__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__495__d)));
    __Vfunc_aes_mul_gf2p2__495__f = ((((IData)(__Vfunc_aes_mul_gf2p2__495__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__495__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__495__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__495__b)));
    __Vfunc_aes_mul_gf2p2__495__Vfuncout = __Vfunc_aes_mul_gf2p2__495__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__495__Vfuncout;
    __Vfunc_aes_mul_gf2p4__460__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__460__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__461__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__460__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__461__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__460__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__461__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__461__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__461__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__461__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__461__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__461__d)));
    __Vfunc_aes_mul_gf2p2__461__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__461__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__461__d)));
    __Vfunc_aes_mul_gf2p2__461__f = ((((IData)(__Vfunc_aes_mul_gf2p2__461__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__461__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__461__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__461__b)));
    __Vfunc_aes_mul_gf2p2__461__Vfuncout = __Vfunc_aes_mul_gf2p2__461__f;
    __Vfunc_aes_mul_gf2p4__460__a = __Vfunc_aes_mul_gf2p2__461__Vfuncout;
    __Vfunc_aes_mul_gf2p2__462__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__460__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__460__delta)));
    __Vfunc_aes_mul_gf2p2__462__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__460__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__460__gamma)));
    __Vfunc_aes_mul_gf2p2__462__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__462__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__462__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__462__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__462__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__462__d)));
    __Vfunc_aes_mul_gf2p2__462__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__462__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__462__d)));
    __Vfunc_aes_mul_gf2p2__462__f = ((((IData)(__Vfunc_aes_mul_gf2p2__462__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__462__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__462__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__462__b)));
    __Vfunc_aes_mul_gf2p2__462__Vfuncout = __Vfunc_aes_mul_gf2p2__462__f;
    __Vfunc_aes_mul_gf2p4__460__b = __Vfunc_aes_mul_gf2p2__462__Vfuncout;
    __Vfunc_aes_mul_gf2p2__463__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__460__delta));
    __Vfunc_aes_mul_gf2p2__463__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__460__gamma));
    __Vfunc_aes_mul_gf2p2__463__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__463__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__463__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__463__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__463__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__463__d)));
    __Vfunc_aes_mul_gf2p2__463__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__463__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__463__d)));
    __Vfunc_aes_mul_gf2p2__463__f = ((((IData)(__Vfunc_aes_mul_gf2p2__463__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__463__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__463__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__463__b)));
    __Vfunc_aes_mul_gf2p2__463__Vfuncout = __Vfunc_aes_mul_gf2p2__463__f;
    __Vfunc_aes_mul_gf2p4__460__c = __Vfunc_aes_mul_gf2p2__463__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__464__g = __Vfunc_aes_mul_gf2p4__460__b;
    __Vfunc_aes_scale_omega2_gf2p2__464__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__464__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__464__g)));
    __Vfunc_aes_scale_omega2_gf2p2__464__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__464__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__460__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__460__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__460__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__464__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__465__g = __Vfunc_aes_mul_gf2p4__460__b;
    __Vfunc_aes_scale_omega2_gf2p2__465__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__465__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__465__g)));
    __Vfunc_aes_scale_omega2_gf2p2__465__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__465__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__460__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__460__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__460__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__465__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__460__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__460__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__460__Vfuncout;
    __Vfunc_aes_mul_gf2p4__466__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__466__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__467__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__466__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__467__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__466__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__467__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__467__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__467__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__467__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__467__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__467__d)));
    __Vfunc_aes_mul_gf2p2__467__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__467__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__467__d)));
    __Vfunc_aes_mul_gf2p2__467__f = ((((IData)(__Vfunc_aes_mul_gf2p2__467__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__467__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__467__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__467__b)));
    __Vfunc_aes_mul_gf2p2__467__Vfuncout = __Vfunc_aes_mul_gf2p2__467__f;
    __Vfunc_aes_mul_gf2p4__466__a = __Vfunc_aes_mul_gf2p2__467__Vfuncout;
    __Vfunc_aes_mul_gf2p2__468__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__466__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__466__delta)));
    __Vfunc_aes_mul_gf2p2__468__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__466__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__466__gamma)));
    __Vfunc_aes_mul_gf2p2__468__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__468__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__468__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__468__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__468__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__468__d)));
    __Vfunc_aes_mul_gf2p2__468__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__468__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__468__d)));
    __Vfunc_aes_mul_gf2p2__468__f = ((((IData)(__Vfunc_aes_mul_gf2p2__468__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__468__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__468__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__468__b)));
    __Vfunc_aes_mul_gf2p2__468__Vfuncout = __Vfunc_aes_mul_gf2p2__468__f;
    __Vfunc_aes_mul_gf2p4__466__b = __Vfunc_aes_mul_gf2p2__468__Vfuncout;
    __Vfunc_aes_mul_gf2p2__469__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__466__delta));
    __Vfunc_aes_mul_gf2p2__469__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__466__gamma));
    __Vfunc_aes_mul_gf2p2__469__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__469__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__469__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__469__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__469__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__469__d)));
    __Vfunc_aes_mul_gf2p2__469__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__469__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__469__d)));
    __Vfunc_aes_mul_gf2p2__469__f = ((((IData)(__Vfunc_aes_mul_gf2p2__469__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__469__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__469__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__469__b)));
    __Vfunc_aes_mul_gf2p2__469__Vfuncout = __Vfunc_aes_mul_gf2p2__469__f;
    __Vfunc_aes_mul_gf2p4__466__c = __Vfunc_aes_mul_gf2p2__469__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__470__g = __Vfunc_aes_mul_gf2p4__466__b;
    __Vfunc_aes_scale_omega2_gf2p2__470__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__470__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__470__g)));
    __Vfunc_aes_scale_omega2_gf2p2__470__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__470__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__466__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__466__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__466__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__470__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__471__g = __Vfunc_aes_mul_gf2p4__466__b;
    __Vfunc_aes_scale_omega2_gf2p2__471__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__471__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__471__g)));
    __Vfunc_aes_scale_omega2_gf2p2__471__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__471__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__466__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__466__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__466__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__471__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__466__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__466__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__466__Vfuncout;
    __Vfunc_aes_mul_gf2p2__498__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__498__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__498__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__498__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__498__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__498__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__498__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__498__d)));
    __Vfunc_aes_mul_gf2p2__498__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__498__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__498__d)));
    __Vfunc_aes_mul_gf2p2__498__f = ((((IData)(__Vfunc_aes_mul_gf2p2__498__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__498__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__498__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__498__b)));
    __Vfunc_aes_mul_gf2p2__498__Vfuncout = __Vfunc_aes_mul_gf2p2__498__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__498__Vfuncout;
    __Vfunc_aes_mul_gf2p2__499__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__499__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__499__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__499__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__499__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__499__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__499__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__499__d)));
    __Vfunc_aes_mul_gf2p2__499__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__499__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__499__d)));
    __Vfunc_aes_mul_gf2p2__499__f = ((((IData)(__Vfunc_aes_mul_gf2p2__499__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__499__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__499__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__499__b)));
    __Vfunc_aes_mul_gf2p2__499__Vfuncout = __Vfunc_aes_mul_gf2p2__499__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__499__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__69(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__69\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__440__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__440__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__440__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__441__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__441__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__441__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__442__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__442__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__442__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__443__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__443__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__443__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__444__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__444__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__444__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__445__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__445__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__445__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__446__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__446__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__446__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__447__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__447__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__447__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__448__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__448__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__448__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__449__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__449__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__449__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__450__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__450__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__450__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__451__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__451__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__451__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__453__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__453__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__453__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__454__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__454__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__454__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__455__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__455__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__455__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__457__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__457__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__457__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__458__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__458__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__458__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__459__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__459__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__459__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__472__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__472__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__472__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__472__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__472__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__472__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__473__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__473__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__473__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__473__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__474__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__474__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__474__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__474__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__475__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__475__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__475__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__475__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__476__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__476__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__476__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__477__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__477__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__477__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__478__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__478__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__478__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__478__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__478__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__478__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__479__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__479__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__479__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__479__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__480__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__480__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__480__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__480__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__481__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__481__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__481__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__481__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__482__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__482__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__482__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__483__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__483__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__483__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__484__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__484__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__485__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__485__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__485__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__486__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__486__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__487__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__487__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__487__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__492__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__492__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__492__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__492__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__493__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__493__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__493__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__493__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__496__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__496__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__496__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__496__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__497__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__497__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__497__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__497__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__500__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__500__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__500__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__500__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__501__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__501__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__501__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__501__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__508__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__508__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__508__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__508__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__508__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__508__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__509__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__509__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__509__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__509__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__510__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__510__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__510__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__510__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__511__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__511__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__511__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__511__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__512__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__512__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__512__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__513__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__513__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__513__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__514__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__514__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__514__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__514__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__514__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__514__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__515__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__515__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__515__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__515__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__516__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__516__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__516__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__516__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__517__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__517__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__517__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__517__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__518__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__518__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__518__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__519__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__519__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__519__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__532__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__532__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__533__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__533__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__533__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__533__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__534__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__534__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__534__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__534__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__d;
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
    vlSelf->__Vfunc_aes_mvm__442__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__442__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__442__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][0U] 
                                            >> 8U));
    __Vfunc_aes_mvm__442__vec_c = 0U;
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__442__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__442__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__442__vec_b)))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__442__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__442__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__442__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__442__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__442__Vfuncout = __Vfunc_aes_mvm__442__vec_c;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__441__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__441__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][0U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][0U] 
                                                >> 8U))));
    __Vfunc_aes_mvm__441__vec_c = 0U;
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__441__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__441__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__441__vec_b)))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__441__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__441__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__441__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__441__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__441__Vfuncout = __Vfunc_aes_mvm__441__vec_c;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__440__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__440__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][0U] 
                                            >> 8U));
    __Vfunc_aes_mvm__440__vec_c = 0U;
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__440__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__440__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__440__vec_b)))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__440__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__440__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__440__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__440__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__440__Vfuncout = __Vfunc_aes_mvm__440__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__440__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__441__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__442__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__445__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__445__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__445__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][0U] 
                                            >> 8U));
    __Vfunc_aes_mvm__445__vec_c = 0U;
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__445__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__445__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__445__vec_b)))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__445__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__445__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__445__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__445__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__445__Vfuncout = __Vfunc_aes_mvm__445__vec_c;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__444__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__444__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][0U] 
                                            >> 8U));
    __Vfunc_aes_mvm__444__vec_c = 0U;
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__444__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__444__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__444__vec_b)))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__444__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__444__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__444__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__444__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__444__Vfuncout = __Vfunc_aes_mvm__444__vec_c;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__443__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__443__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][0U] 
                                            >> 8U));
    __Vfunc_aes_mvm__443__vec_c = 0U;
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__443__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__443__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__443__vec_b)))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__443__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__443__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__443__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__443__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__443__Vfuncout = __Vfunc_aes_mvm__443__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__443__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__444__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__445__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma)));
    __Vfunc_aes_square_gf2p2__453__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__452__gamma));
    __Vfunc_aes_square_gf2p2__453__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__453__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__453__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__453__Vfuncout = __Vfunc_aes_square_gf2p2__453__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b = __Vfunc_aes_square_gf2p2__453__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__455__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__b;
    __Vfunc_aes_scale_omega_gf2p2__455__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__455__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__455__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__455__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__455__d;
    __Vfunc_aes_square_gf2p2__454__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__a;
    __Vfunc_aes_square_gf2p2__454__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__454__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__454__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__454__Vfuncout = __Vfunc_aes_square_gf2p2__454__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__454__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__455__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__452__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma)));
    __Vfunc_aes_square_gf2p2__457__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__456__gamma));
    __Vfunc_aes_square_gf2p2__457__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__457__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__457__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__457__Vfuncout = __Vfunc_aes_square_gf2p2__457__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b = __Vfunc_aes_square_gf2p2__457__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__459__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__b;
    __Vfunc_aes_scale_omega_gf2p2__459__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__459__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__459__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__459__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__459__d;
    __Vfunc_aes_square_gf2p2__458__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__a;
    __Vfunc_aes_square_gf2p2__458__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__458__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__458__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__458__Vfuncout = __Vfunc_aes_square_gf2p2__458__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__458__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__459__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__456__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__472__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__472__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__473__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__472__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__473__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__472__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__473__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__473__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__473__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__473__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__473__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__473__d)));
    __Vfunc_aes_mul_gf2p2__473__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__473__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__473__d)));
    __Vfunc_aes_mul_gf2p2__473__f = ((((IData)(__Vfunc_aes_mul_gf2p2__473__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__473__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__473__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__473__b)));
    __Vfunc_aes_mul_gf2p2__473__Vfuncout = __Vfunc_aes_mul_gf2p2__473__f;
    __Vfunc_aes_mul_gf2p4__472__a = __Vfunc_aes_mul_gf2p2__473__Vfuncout;
    __Vfunc_aes_mul_gf2p2__474__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__472__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__472__delta)));
    __Vfunc_aes_mul_gf2p2__474__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__472__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__472__gamma)));
    __Vfunc_aes_mul_gf2p2__474__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__474__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__474__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__474__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__474__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__474__d)));
    __Vfunc_aes_mul_gf2p2__474__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__474__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__474__d)));
    __Vfunc_aes_mul_gf2p2__474__f = ((((IData)(__Vfunc_aes_mul_gf2p2__474__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__474__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__474__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__474__b)));
    __Vfunc_aes_mul_gf2p2__474__Vfuncout = __Vfunc_aes_mul_gf2p2__474__f;
    __Vfunc_aes_mul_gf2p4__472__b = __Vfunc_aes_mul_gf2p2__474__Vfuncout;
    __Vfunc_aes_mul_gf2p2__475__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__472__delta));
    __Vfunc_aes_mul_gf2p2__475__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__472__gamma));
    __Vfunc_aes_mul_gf2p2__475__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__475__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__475__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__475__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__475__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__475__d)));
    __Vfunc_aes_mul_gf2p2__475__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__475__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__475__d)));
    __Vfunc_aes_mul_gf2p2__475__f = ((((IData)(__Vfunc_aes_mul_gf2p2__475__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__475__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__475__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__475__b)));
    __Vfunc_aes_mul_gf2p2__475__Vfuncout = __Vfunc_aes_mul_gf2p2__475__f;
    __Vfunc_aes_mul_gf2p4__472__c = __Vfunc_aes_mul_gf2p2__475__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__476__g = __Vfunc_aes_mul_gf2p4__472__b;
    __Vfunc_aes_scale_omega2_gf2p2__476__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__476__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__476__g)));
    __Vfunc_aes_scale_omega2_gf2p2__476__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__476__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__472__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__472__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__472__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__476__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__477__g = __Vfunc_aes_mul_gf2p4__472__b;
    __Vfunc_aes_scale_omega2_gf2p2__477__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__477__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__477__g)));
    __Vfunc_aes_scale_omega2_gf2p2__477__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__477__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__472__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__472__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__472__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__477__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__472__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__472__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__472__Vfuncout;
    __Vfunc_aes_mul_gf2p4__478__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__478__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__479__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__478__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__479__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__478__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__479__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__479__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__479__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__479__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__479__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__479__d)));
    __Vfunc_aes_mul_gf2p2__479__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__479__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__479__d)));
    __Vfunc_aes_mul_gf2p2__479__f = ((((IData)(__Vfunc_aes_mul_gf2p2__479__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__479__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__479__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__479__b)));
    __Vfunc_aes_mul_gf2p2__479__Vfuncout = __Vfunc_aes_mul_gf2p2__479__f;
    __Vfunc_aes_mul_gf2p4__478__a = __Vfunc_aes_mul_gf2p2__479__Vfuncout;
    __Vfunc_aes_mul_gf2p2__480__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__478__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__478__delta)));
    __Vfunc_aes_mul_gf2p2__480__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__478__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__478__gamma)));
    __Vfunc_aes_mul_gf2p2__480__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__480__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__480__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__480__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__480__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__480__d)));
    __Vfunc_aes_mul_gf2p2__480__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__480__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__480__d)));
    __Vfunc_aes_mul_gf2p2__480__f = ((((IData)(__Vfunc_aes_mul_gf2p2__480__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__480__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__480__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__480__b)));
    __Vfunc_aes_mul_gf2p2__480__Vfuncout = __Vfunc_aes_mul_gf2p2__480__f;
    __Vfunc_aes_mul_gf2p4__478__b = __Vfunc_aes_mul_gf2p2__480__Vfuncout;
    __Vfunc_aes_mul_gf2p2__481__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__478__delta));
    __Vfunc_aes_mul_gf2p2__481__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__478__gamma));
    __Vfunc_aes_mul_gf2p2__481__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__481__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__481__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__481__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__481__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__481__d)));
    __Vfunc_aes_mul_gf2p2__481__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__481__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__481__d)));
    __Vfunc_aes_mul_gf2p2__481__f = ((((IData)(__Vfunc_aes_mul_gf2p2__481__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__481__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__481__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__481__b)));
    __Vfunc_aes_mul_gf2p2__481__Vfuncout = __Vfunc_aes_mul_gf2p2__481__f;
    __Vfunc_aes_mul_gf2p4__478__c = __Vfunc_aes_mul_gf2p2__481__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__482__g = __Vfunc_aes_mul_gf2p4__478__b;
    __Vfunc_aes_scale_omega2_gf2p2__482__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__482__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__482__g)));
    __Vfunc_aes_scale_omega2_gf2p2__482__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__482__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__478__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__478__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__478__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__482__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__483__g = __Vfunc_aes_mul_gf2p4__478__b;
    __Vfunc_aes_scale_omega2_gf2p2__483__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__483__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__483__g)));
    __Vfunc_aes_scale_omega2_gf2p2__483__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__483__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__478__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__478__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__478__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__483__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__478__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__478__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__478__Vfuncout;
    __Vfunc_aes_mul_gf2p2__496__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__496__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__496__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__496__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__496__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__496__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__496__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__496__d)));
    __Vfunc_aes_mul_gf2p2__496__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__496__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__496__d)));
    __Vfunc_aes_mul_gf2p2__496__f = ((((IData)(__Vfunc_aes_mul_gf2p2__496__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__496__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__496__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__496__b)));
    __Vfunc_aes_mul_gf2p2__496__Vfuncout = __Vfunc_aes_mul_gf2p2__496__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__496__Vfuncout;
    __Vfunc_aes_mul_gf2p2__497__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__497__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__497__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__497__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__497__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__497__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__497__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__497__d)));
    __Vfunc_aes_mul_gf2p2__497__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__497__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__497__d)));
    __Vfunc_aes_mul_gf2p2__497__f = ((((IData)(__Vfunc_aes_mul_gf2p2__497__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__497__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__497__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__497__b)));
    __Vfunc_aes_mul_gf2p2__497__Vfuncout = __Vfunc_aes_mul_gf2p2__497__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__497__Vfuncout;
    __Vfunc_aes_mul_gf2p2__500__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__500__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__500__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__500__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__500__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__500__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__500__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__500__d)));
    __Vfunc_aes_mul_gf2p2__500__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__500__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__500__d)));
    __Vfunc_aes_mul_gf2p2__500__f = ((((IData)(__Vfunc_aes_mul_gf2p2__500__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__500__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__500__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__500__b)));
    __Vfunc_aes_mul_gf2p2__500__Vfuncout = __Vfunc_aes_mul_gf2p2__500__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__500__Vfuncout;
    __Vfunc_aes_mul_gf2p2__501__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__501__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__501__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__501__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__501__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__501__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__501__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__501__d)));
    __Vfunc_aes_mul_gf2p2__501__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__501__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__501__d)));
    __Vfunc_aes_mul_gf2p2__501__f = ((((IData)(__Vfunc_aes_mul_gf2p2__501__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__501__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__501__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__501__b)));
    __Vfunc_aes_mul_gf2p2__501__Vfuncout = __Vfunc_aes_mul_gf2p2__501__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__501__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__451__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__451__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__451__vec_c = 0U;
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__451__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__451__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__451__vec_b)))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__451__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__451__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__451__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__451__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__451__Vfuncout = __Vfunc_aes_mvm__451__vec_c;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__450__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__450__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__450__vec_c = 0U;
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__450__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__450__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__450__vec_b)))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__450__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__450__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__450__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__450__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__450__Vfuncout = __Vfunc_aes_mvm__450__vec_c;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__449__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__449__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__449__vec_c = 0U;
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__449__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__449__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__449__vec_b)))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__449__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__449__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__449__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__449__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__449__Vfuncout = __Vfunc_aes_mvm__449__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__449__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__450__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__451__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__448__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__448__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__448__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__448__vec_c = 0U;
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__448__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__448__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__448__vec_b)))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__448__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__448__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__448__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__448__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__448__Vfuncout = __Vfunc_aes_mvm__448__vec_c;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__447__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__447__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__447__vec_c = 0U;
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__447__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__447__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__447__vec_b)))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__447__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__447__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__447__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__447__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__447__Vfuncout = __Vfunc_aes_mvm__447__vec_c;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__446__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__446__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__446__vec_c = 0U;
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__446__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__446__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__446__vec_b)))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__446__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__446__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__446__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__446__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__446__Vfuncout = __Vfunc_aes_mvm__446__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__446__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__447__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__448__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__492__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__492__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__492__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__492__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__492__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__492__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__492__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__492__d)));
    __Vfunc_aes_mul_gf2p2__492__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__492__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__492__d)));
    __Vfunc_aes_mul_gf2p2__492__f = ((((IData)(__Vfunc_aes_mul_gf2p2__492__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__492__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__492__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__492__b)));
    __Vfunc_aes_mul_gf2p2__492__Vfuncout = __Vfunc_aes_mul_gf2p2__492__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__492__Vfuncout;
    __Vfunc_aes_mul_gf2p2__493__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__493__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__493__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__493__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__493__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__493__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__493__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__493__d)));
    __Vfunc_aes_mul_gf2p2__493__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__493__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__493__d)));
    __Vfunc_aes_mul_gf2p2__493__f = ((((IData)(__Vfunc_aes_mul_gf2p2__493__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__493__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__493__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__493__b)));
    __Vfunc_aes_mul_gf2p2__493__Vfuncout = __Vfunc_aes_mul_gf2p2__493__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__493__Vfuncout;
    __Vfunc_aes_square_gf2p2__485__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__485__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__485__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__485__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__485__Vfuncout = __Vfunc_aes_square_gf2p2__485__d;
    __Vfunc_aes_scale_omega2_gf2p2__484__g = __Vfunc_aes_square_gf2p2__485__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__484__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__484__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__484__g)));
    __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__484__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__484__Vfuncout;
    __Vfunc_aes_square_gf2p2__487__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__487__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__487__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__487__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__487__Vfuncout = __Vfunc_aes_square_gf2p2__487__d;
    __Vfunc_aes_scale_omega2_gf2p2__486__g = __Vfunc_aes_square_gf2p2__487__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__486__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__486__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__486__g)));
    __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__486__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__486__Vfuncout;
    __Vfunc_aes_mul_gf2p4__508__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__508__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__509__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__508__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__509__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__508__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__509__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__509__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__509__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__509__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__509__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__509__d)));
    __Vfunc_aes_mul_gf2p2__509__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__509__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__509__d)));
    __Vfunc_aes_mul_gf2p2__509__f = ((((IData)(__Vfunc_aes_mul_gf2p2__509__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__509__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__509__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__509__b)));
    __Vfunc_aes_mul_gf2p2__509__Vfuncout = __Vfunc_aes_mul_gf2p2__509__f;
    __Vfunc_aes_mul_gf2p4__508__a = __Vfunc_aes_mul_gf2p2__509__Vfuncout;
    __Vfunc_aes_mul_gf2p2__510__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__508__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__508__delta)));
    __Vfunc_aes_mul_gf2p2__510__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__508__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__508__gamma)));
    __Vfunc_aes_mul_gf2p2__510__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__510__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__510__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__510__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__510__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__510__d)));
    __Vfunc_aes_mul_gf2p2__510__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__510__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__510__d)));
    __Vfunc_aes_mul_gf2p2__510__f = ((((IData)(__Vfunc_aes_mul_gf2p2__510__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__510__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__510__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__510__b)));
    __Vfunc_aes_mul_gf2p2__510__Vfuncout = __Vfunc_aes_mul_gf2p2__510__f;
    __Vfunc_aes_mul_gf2p4__508__b = __Vfunc_aes_mul_gf2p2__510__Vfuncout;
    __Vfunc_aes_mul_gf2p2__511__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__508__delta));
    __Vfunc_aes_mul_gf2p2__511__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__508__gamma));
    __Vfunc_aes_mul_gf2p2__511__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__511__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__511__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__511__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__511__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__511__d)));
    __Vfunc_aes_mul_gf2p2__511__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__511__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__511__d)));
    __Vfunc_aes_mul_gf2p2__511__f = ((((IData)(__Vfunc_aes_mul_gf2p2__511__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__511__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__511__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__511__b)));
    __Vfunc_aes_mul_gf2p2__511__Vfuncout = __Vfunc_aes_mul_gf2p2__511__f;
    __Vfunc_aes_mul_gf2p4__508__c = __Vfunc_aes_mul_gf2p2__511__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__512__g = __Vfunc_aes_mul_gf2p4__508__b;
    __Vfunc_aes_scale_omega2_gf2p2__512__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__512__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__512__g)));
    __Vfunc_aes_scale_omega2_gf2p2__512__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__512__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__508__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__508__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__508__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__512__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__513__g = __Vfunc_aes_mul_gf2p4__508__b;
    __Vfunc_aes_scale_omega2_gf2p2__513__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__513__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__513__g)));
    __Vfunc_aes_scale_omega2_gf2p2__513__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__513__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__508__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__508__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__508__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__513__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__508__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__508__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__508__Vfuncout;
    __Vfunc_aes_mul_gf2p4__514__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__514__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__515__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__514__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__515__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__514__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__515__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__515__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__515__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__515__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__515__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__515__d)));
    __Vfunc_aes_mul_gf2p2__515__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__515__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__515__d)));
    __Vfunc_aes_mul_gf2p2__515__f = ((((IData)(__Vfunc_aes_mul_gf2p2__515__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__515__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__515__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__515__b)));
    __Vfunc_aes_mul_gf2p2__515__Vfuncout = __Vfunc_aes_mul_gf2p2__515__f;
    __Vfunc_aes_mul_gf2p4__514__a = __Vfunc_aes_mul_gf2p2__515__Vfuncout;
    __Vfunc_aes_mul_gf2p2__516__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__514__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__514__delta)));
    __Vfunc_aes_mul_gf2p2__516__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__514__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__514__gamma)));
    __Vfunc_aes_mul_gf2p2__516__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__516__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__516__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__516__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__516__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__516__d)));
    __Vfunc_aes_mul_gf2p2__516__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__516__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__516__d)));
    __Vfunc_aes_mul_gf2p2__516__f = ((((IData)(__Vfunc_aes_mul_gf2p2__516__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__516__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__516__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__516__b)));
    __Vfunc_aes_mul_gf2p2__516__Vfuncout = __Vfunc_aes_mul_gf2p2__516__f;
    __Vfunc_aes_mul_gf2p4__514__b = __Vfunc_aes_mul_gf2p2__516__Vfuncout;
    __Vfunc_aes_mul_gf2p2__517__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__514__delta));
    __Vfunc_aes_mul_gf2p2__517__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__514__gamma));
    __Vfunc_aes_mul_gf2p2__517__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__517__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__517__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__517__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__517__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__517__d)));
    __Vfunc_aes_mul_gf2p2__517__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__517__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__517__d)));
    __Vfunc_aes_mul_gf2p2__517__f = ((((IData)(__Vfunc_aes_mul_gf2p2__517__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__517__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__517__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__517__b)));
    __Vfunc_aes_mul_gf2p2__517__Vfuncout = __Vfunc_aes_mul_gf2p2__517__f;
    __Vfunc_aes_mul_gf2p4__514__c = __Vfunc_aes_mul_gf2p2__517__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__518__g = __Vfunc_aes_mul_gf2p4__514__b;
    __Vfunc_aes_scale_omega2_gf2p2__518__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__518__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__518__g)));
    __Vfunc_aes_scale_omega2_gf2p2__518__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__518__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__514__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__514__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__514__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__518__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__519__g = __Vfunc_aes_mul_gf2p4__514__b;
    __Vfunc_aes_scale_omega2_gf2p2__519__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__519__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__519__g)));
    __Vfunc_aes_scale_omega2_gf2p2__519__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__519__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__514__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__514__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__514__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__519__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__514__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__514__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__514__Vfuncout;
    __Vfunc_aes_mul_gf2p4__532__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__532__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__533__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__532__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__533__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__532__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__533__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__533__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__533__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__533__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__533__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__533__d)));
    __Vfunc_aes_mul_gf2p2__533__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__533__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__533__d)));
    __Vfunc_aes_mul_gf2p2__533__f = ((((IData)(__Vfunc_aes_mul_gf2p2__533__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__533__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__533__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__533__b)));
    __Vfunc_aes_mul_gf2p2__533__Vfuncout = __Vfunc_aes_mul_gf2p2__533__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__532__a = __Vfunc_aes_mul_gf2p2__533__Vfuncout;
    __Vfunc_aes_mul_gf2p2__534__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__532__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__532__delta)));
    __Vfunc_aes_mul_gf2p2__534__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__532__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__532__gamma)));
    __Vfunc_aes_mul_gf2p2__534__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__534__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__534__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__534__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__534__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__534__d)));
    __Vfunc_aes_mul_gf2p2__534__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__534__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__534__d)));
    __Vfunc_aes_mul_gf2p2__534__f = ((((IData)(__Vfunc_aes_mul_gf2p2__534__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__534__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__534__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__534__b)));
    __Vfunc_aes_mul_gf2p2__534__Vfuncout = __Vfunc_aes_mul_gf2p2__534__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__532__b = __Vfunc_aes_mul_gf2p2__534__Vfuncout;
    __Vfunc_aes_mul_gf2p2__535__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__532__delta));
    __Vfunc_aes_mul_gf2p2__535__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__532__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__535__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__535__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__535__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__535__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__535__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__535__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__535__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__535__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__535__d)));
}
