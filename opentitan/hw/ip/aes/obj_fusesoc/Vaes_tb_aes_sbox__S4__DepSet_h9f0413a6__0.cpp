// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__62(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__62\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__62__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__62__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__62__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__62__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__62__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__62__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__63__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__63__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__63__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__64__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__64__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__64__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__65__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__65__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__65__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__66__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__66__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__66__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__67__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__67__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__67__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__80__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__80__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__80__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__80__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__80__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__80__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__81__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__81__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__81__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__82__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__82__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__82__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__83__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__83__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__83__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__84__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__84__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__84__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__85__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__85__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__85__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__87__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__87__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__87__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__88__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__88__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__88__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__89__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__89__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__89__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__90__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__91__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__91__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__92__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__96__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__96__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__97__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__97__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__102__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__102__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__103__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__103__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__104__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__104__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__104__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__104__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__104__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__104__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__105__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__105__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__105__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__106__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__106__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__106__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__107__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__107__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__107__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__108__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__108__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__108__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__109__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__109__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__109__d;
    // Body
    __Vfunc_aes_mul_gf2p2__95__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__95__a) 
                                      ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__95__b)) 
                                     << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__95__c) 
                                               ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__95__b)));
    __Vfunc_aes_mul_gf2p2__95__Vfuncout = __Vfunc_aes_mul_gf2p2__95__f;
    __Vfunc_aes_mul_gf2p4__92__c = __Vfunc_aes_mul_gf2p2__95__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__96__g = vlSelf->__Vfunc_aes_mul_gf2p4__92__b;
    __Vfunc_aes_scale_omega2_gf2p2__96__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__96__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__96__g)));
    __Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__96__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__92__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__92__theta)) 
                                                | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__92__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__97__g = vlSelf->__Vfunc_aes_mul_gf2p4__92__b;
    __Vfunc_aes_scale_omega2_gf2p2__97__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__97__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__97__g)));
    __Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__97__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__92__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__92__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__92__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__92__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__92__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__92__Vfuncout;
    __Vfunc_aes_mul_gf2p4__104__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__104__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__105__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__104__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__105__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__104__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__105__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__105__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__105__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__105__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__105__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__105__d)));
    __Vfunc_aes_mul_gf2p2__105__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__105__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__105__d)));
    __Vfunc_aes_mul_gf2p2__105__f = ((((IData)(__Vfunc_aes_mul_gf2p2__105__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__105__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__105__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__105__b)));
    __Vfunc_aes_mul_gf2p2__105__Vfuncout = __Vfunc_aes_mul_gf2p2__105__f;
    __Vfunc_aes_mul_gf2p4__104__a = __Vfunc_aes_mul_gf2p2__105__Vfuncout;
    __Vfunc_aes_mul_gf2p2__106__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__104__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__104__delta)));
    __Vfunc_aes_mul_gf2p2__106__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__104__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__104__gamma)));
    __Vfunc_aes_mul_gf2p2__106__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__106__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__106__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__106__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__106__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__106__d)));
    __Vfunc_aes_mul_gf2p2__106__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__106__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__106__d)));
    __Vfunc_aes_mul_gf2p2__106__f = ((((IData)(__Vfunc_aes_mul_gf2p2__106__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__106__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__106__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__106__b)));
    __Vfunc_aes_mul_gf2p2__106__Vfuncout = __Vfunc_aes_mul_gf2p2__106__f;
    __Vfunc_aes_mul_gf2p4__104__b = __Vfunc_aes_mul_gf2p2__106__Vfuncout;
    __Vfunc_aes_mul_gf2p2__107__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__104__delta));
    __Vfunc_aes_mul_gf2p2__107__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__104__gamma));
    __Vfunc_aes_mul_gf2p2__107__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__107__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__107__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__107__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__107__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__107__d)));
    __Vfunc_aes_mul_gf2p2__107__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__107__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__107__d)));
    __Vfunc_aes_mul_gf2p2__107__f = ((((IData)(__Vfunc_aes_mul_gf2p2__107__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__107__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__107__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__107__b)));
    __Vfunc_aes_mul_gf2p2__107__Vfuncout = __Vfunc_aes_mul_gf2p2__107__f;
    __Vfunc_aes_mul_gf2p4__104__c = __Vfunc_aes_mul_gf2p2__107__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__108__g = __Vfunc_aes_mul_gf2p4__104__b;
    __Vfunc_aes_scale_omega2_gf2p2__108__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__108__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__108__g)));
    __Vfunc_aes_scale_omega2_gf2p2__108__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__108__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__104__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__104__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__104__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__108__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__109__g = __Vfunc_aes_mul_gf2p4__104__b;
    __Vfunc_aes_scale_omega2_gf2p2__109__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__109__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__109__g)));
    __Vfunc_aes_scale_omega2_gf2p2__109__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__109__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__104__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__104__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__104__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__109__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__104__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__104__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__104__Vfuncout;
    __Vfunc_aes_mul_gf2p4__62__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__62__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                >> 0xcU));
    __Vfunc_aes_mul_gf2p2__63__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__62__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__63__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__62__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__63__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__63__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__63__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__63__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__63__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__63__d)));
    __Vfunc_aes_mul_gf2p2__63__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__63__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__63__d)));
    __Vfunc_aes_mul_gf2p2__63__f = ((((IData)(__Vfunc_aes_mul_gf2p2__63__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__63__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__63__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__63__b)));
    __Vfunc_aes_mul_gf2p2__63__Vfuncout = __Vfunc_aes_mul_gf2p2__63__f;
    __Vfunc_aes_mul_gf2p4__62__a = __Vfunc_aes_mul_gf2p2__63__Vfuncout;
    __Vfunc_aes_mul_gf2p2__64__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__62__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__62__delta)));
    __Vfunc_aes_mul_gf2p2__64__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__62__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__62__gamma)));
    __Vfunc_aes_mul_gf2p2__64__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__64__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__64__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__64__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__64__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__64__d)));
    __Vfunc_aes_mul_gf2p2__64__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__64__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__64__d)));
    __Vfunc_aes_mul_gf2p2__64__f = ((((IData)(__Vfunc_aes_mul_gf2p2__64__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__64__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__64__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__64__b)));
    __Vfunc_aes_mul_gf2p2__64__Vfuncout = __Vfunc_aes_mul_gf2p2__64__f;
    __Vfunc_aes_mul_gf2p4__62__b = __Vfunc_aes_mul_gf2p2__64__Vfuncout;
    __Vfunc_aes_mul_gf2p2__65__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__62__delta));
    __Vfunc_aes_mul_gf2p2__65__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__62__gamma));
    __Vfunc_aes_mul_gf2p2__65__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__65__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__65__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__65__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__65__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__65__d)));
    __Vfunc_aes_mul_gf2p2__65__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__65__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__65__d)));
    __Vfunc_aes_mul_gf2p2__65__f = ((((IData)(__Vfunc_aes_mul_gf2p2__65__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__65__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__65__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__65__b)));
    __Vfunc_aes_mul_gf2p2__65__Vfuncout = __Vfunc_aes_mul_gf2p2__65__f;
    __Vfunc_aes_mul_gf2p4__62__c = __Vfunc_aes_mul_gf2p2__65__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__66__g = __Vfunc_aes_mul_gf2p4__62__b;
    __Vfunc_aes_scale_omega2_gf2p2__66__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__66__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__66__g)));
    __Vfunc_aes_scale_omega2_gf2p2__66__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__66__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__62__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__62__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__62__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__66__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__67__g = __Vfunc_aes_mul_gf2p4__62__b;
    __Vfunc_aes_scale_omega2_gf2p2__67__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__67__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__67__g)));
    __Vfunc_aes_scale_omega2_gf2p2__67__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__67__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__62__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__62__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__62__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__67__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__62__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__62__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__62__Vfuncout;
    __Vfunc_aes_mul_gf2p4__80__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                >> 4U));
    __Vfunc_aes_mul_gf2p4__80__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__81__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__80__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__81__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__80__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__81__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__81__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__81__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__81__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__81__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__81__d)));
    __Vfunc_aes_mul_gf2p2__81__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__81__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__81__d)));
    __Vfunc_aes_mul_gf2p2__81__f = ((((IData)(__Vfunc_aes_mul_gf2p2__81__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__81__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__81__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__81__b)));
    __Vfunc_aes_mul_gf2p2__81__Vfuncout = __Vfunc_aes_mul_gf2p2__81__f;
    __Vfunc_aes_mul_gf2p4__80__a = __Vfunc_aes_mul_gf2p2__81__Vfuncout;
    __Vfunc_aes_mul_gf2p2__82__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__80__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__80__delta)));
    __Vfunc_aes_mul_gf2p2__82__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__80__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__80__gamma)));
    __Vfunc_aes_mul_gf2p2__82__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__82__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__82__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__82__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__82__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__82__d)));
    __Vfunc_aes_mul_gf2p2__82__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__82__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__82__d)));
    __Vfunc_aes_mul_gf2p2__82__f = ((((IData)(__Vfunc_aes_mul_gf2p2__82__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__82__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__82__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__82__b)));
    __Vfunc_aes_mul_gf2p2__82__Vfuncout = __Vfunc_aes_mul_gf2p2__82__f;
    __Vfunc_aes_mul_gf2p4__80__b = __Vfunc_aes_mul_gf2p2__82__Vfuncout;
    __Vfunc_aes_mul_gf2p2__83__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__80__delta));
    __Vfunc_aes_mul_gf2p2__83__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__80__gamma));
    __Vfunc_aes_mul_gf2p2__83__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__83__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__83__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__83__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__83__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__83__d)));
    __Vfunc_aes_mul_gf2p2__83__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__83__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__83__d)));
    __Vfunc_aes_mul_gf2p2__83__f = ((((IData)(__Vfunc_aes_mul_gf2p2__83__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__83__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__83__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__83__b)));
    __Vfunc_aes_mul_gf2p2__83__Vfuncout = __Vfunc_aes_mul_gf2p2__83__f;
    __Vfunc_aes_mul_gf2p4__80__c = __Vfunc_aes_mul_gf2p2__83__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__84__g = __Vfunc_aes_mul_gf2p4__80__b;
    __Vfunc_aes_scale_omega2_gf2p2__84__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__84__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__84__g)));
    __Vfunc_aes_scale_omega2_gf2p2__84__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__84__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__80__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__80__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__80__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__84__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__85__g = __Vfunc_aes_mul_gf2p4__80__b;
    __Vfunc_aes_scale_omega2_gf2p2__85__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__85__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__85__g)));
    __Vfunc_aes_scale_omega2_gf2p2__85__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__85__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__80__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__80__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__80__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__85__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__80__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__80__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__80__Vfuncout;
    __Vfunc_aes_mul_gf2p4__86__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                >> 8U));
    __Vfunc_aes_mul_gf2p4__86__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__87__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__86__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__87__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__86__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__87__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__87__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__87__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__87__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__87__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__87__d)));
    __Vfunc_aes_mul_gf2p2__87__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__87__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__87__d)));
    __Vfunc_aes_mul_gf2p2__87__f = ((((IData)(__Vfunc_aes_mul_gf2p2__87__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__87__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__87__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__87__b)));
    __Vfunc_aes_mul_gf2p2__87__Vfuncout = __Vfunc_aes_mul_gf2p2__87__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__a = __Vfunc_aes_mul_gf2p2__87__Vfuncout;
    __Vfunc_aes_mul_gf2p2__88__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__86__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__86__delta)));
    __Vfunc_aes_mul_gf2p2__88__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__86__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__86__gamma)));
    __Vfunc_aes_mul_gf2p2__88__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__88__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__88__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__88__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__88__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__88__d)));
    __Vfunc_aes_mul_gf2p2__88__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__88__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__88__d)));
    __Vfunc_aes_mul_gf2p2__88__f = ((((IData)(__Vfunc_aes_mul_gf2p2__88__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__88__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__88__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__88__b)));
    __Vfunc_aes_mul_gf2p2__88__Vfuncout = __Vfunc_aes_mul_gf2p2__88__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__b = __Vfunc_aes_mul_gf2p2__88__Vfuncout;
    __Vfunc_aes_mul_gf2p2__89__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__86__delta));
    __Vfunc_aes_mul_gf2p2__89__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__86__gamma));
    __Vfunc_aes_mul_gf2p2__89__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__89__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__89__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__89__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__89__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__89__d)));
    __Vfunc_aes_mul_gf2p2__89__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__89__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__89__d)));
    __Vfunc_aes_mul_gf2p2__89__f = ((((IData)(__Vfunc_aes_mul_gf2p2__89__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__89__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__89__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__89__b)));
    __Vfunc_aes_mul_gf2p2__89__Vfuncout = __Vfunc_aes_mul_gf2p2__89__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__c = __Vfunc_aes_mul_gf2p2__89__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__90__g = vlSelf->__Vfunc_aes_mul_gf2p4__86__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__d = 
        ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__90__g) 
                << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__90__g)));
    __Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__theta)) 
                                                | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__91__g = vlSelf->__Vfunc_aes_mul_gf2p4__86__b;
    __Vfunc_aes_scale_omega2_gf2p2__91__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__91__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__91__g)));
    __Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__91__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__theta)) 
                                                | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__86__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__86__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__86__Vfuncout;
    __Vfunc_aes_mul_gf2p4__98__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__98__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__99__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__98__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__99__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__98__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__99__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__99__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__99__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__99__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__99__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__99__d)));
    __Vfunc_aes_mul_gf2p2__99__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__99__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__99__d)));
    __Vfunc_aes_mul_gf2p2__99__f = ((((IData)(__Vfunc_aes_mul_gf2p2__99__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__99__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__99__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__99__b)));
    __Vfunc_aes_mul_gf2p2__99__Vfuncout = __Vfunc_aes_mul_gf2p2__99__f;
    __Vfunc_aes_mul_gf2p4__98__a = __Vfunc_aes_mul_gf2p2__99__Vfuncout;
    __Vfunc_aes_mul_gf2p2__100__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__98__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__98__delta)));
    __Vfunc_aes_mul_gf2p2__100__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__98__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__98__gamma)));
    __Vfunc_aes_mul_gf2p2__100__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__100__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__100__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__100__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__100__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__100__d)));
    __Vfunc_aes_mul_gf2p2__100__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__100__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__100__d)));
    __Vfunc_aes_mul_gf2p2__100__f = ((((IData)(__Vfunc_aes_mul_gf2p2__100__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__100__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__100__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__100__b)));
    __Vfunc_aes_mul_gf2p2__100__Vfuncout = __Vfunc_aes_mul_gf2p2__100__f;
    __Vfunc_aes_mul_gf2p4__98__b = __Vfunc_aes_mul_gf2p2__100__Vfuncout;
    __Vfunc_aes_mul_gf2p2__101__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__98__delta));
    __Vfunc_aes_mul_gf2p2__101__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__98__gamma));
    __Vfunc_aes_mul_gf2p2__101__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__101__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__101__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__101__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__101__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__101__d)));
    __Vfunc_aes_mul_gf2p2__101__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__101__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__101__d)));
    __Vfunc_aes_mul_gf2p2__101__f = ((((IData)(__Vfunc_aes_mul_gf2p2__101__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__101__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__101__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__101__b)));
    __Vfunc_aes_mul_gf2p2__101__Vfuncout = __Vfunc_aes_mul_gf2p2__101__f;
    __Vfunc_aes_mul_gf2p4__98__c = __Vfunc_aes_mul_gf2p2__101__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__102__g = __Vfunc_aes_mul_gf2p4__98__b;
    __Vfunc_aes_scale_omega2_gf2p2__102__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__102__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__102__g)));
    __Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__102__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__98__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__98__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__103__g = __Vfunc_aes_mul_gf2p4__98__b;
    __Vfunc_aes_scale_omega2_gf2p2__103__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__103__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__103__g)));
    __Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__103__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__98__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__98__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__98__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__98__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__98__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__48__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                             >> 2U));
    __Vfunc_aes_square_gf2p2__48__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__48__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__48__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__48__Vfuncout = __Vfunc_aes_square_gf2p2__48__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__48__Vfuncout;
    __Vfunc_aes_square_gf2p2__49__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                             ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__49__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__49__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__49__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__49__Vfuncout = __Vfunc_aes_square_gf2p2__49__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__49__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__64(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__64\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__172__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__172__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__172__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__172__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__172__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__172__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__173__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__173__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__173__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__174__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__174__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__174__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__175__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__175__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__175__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__176__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__176__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__176__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__177__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__177__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__177__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__190__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__190__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__190__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__190__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__190__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__190__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__191__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__191__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__191__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__192__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__192__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__192__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__193__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__193__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__193__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__194__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__194__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__194__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__195__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__195__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__195__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__197__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__197__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__197__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__198__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__198__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__198__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__199__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__199__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__199__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__200__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__201__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__201__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__202__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__206__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__206__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__207__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__207__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__212__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__212__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__213__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__213__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__214__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__214__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__214__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__214__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__214__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__214__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__215__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__215__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__215__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__216__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__216__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__216__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__217__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__217__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__217__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__218__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__218__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__218__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__219__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__219__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__219__d;
    // Body
    __Vfunc_aes_mul_gf2p2__205__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__205__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__205__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__205__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__205__b)));
    __Vfunc_aes_mul_gf2p2__205__Vfuncout = __Vfunc_aes_mul_gf2p2__205__f;
    __Vfunc_aes_mul_gf2p4__202__c = __Vfunc_aes_mul_gf2p2__205__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__206__g = vlSelf->__Vfunc_aes_mul_gf2p4__202__b;
    __Vfunc_aes_scale_omega2_gf2p2__206__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__206__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__206__g)));
    __Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__206__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__202__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__202__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__202__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__207__g = vlSelf->__Vfunc_aes_mul_gf2p4__202__b;
    __Vfunc_aes_scale_omega2_gf2p2__207__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__207__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__207__g)));
    __Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__207__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__202__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__202__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__202__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__202__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__202__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__202__Vfuncout;
    __Vfunc_aes_mul_gf2p4__214__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__214__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__215__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__214__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__215__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__214__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__215__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__215__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__215__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__215__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__215__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__215__d)));
    __Vfunc_aes_mul_gf2p2__215__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__215__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__215__d)));
    __Vfunc_aes_mul_gf2p2__215__f = ((((IData)(__Vfunc_aes_mul_gf2p2__215__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__215__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__215__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__215__b)));
    __Vfunc_aes_mul_gf2p2__215__Vfuncout = __Vfunc_aes_mul_gf2p2__215__f;
    __Vfunc_aes_mul_gf2p4__214__a = __Vfunc_aes_mul_gf2p2__215__Vfuncout;
    __Vfunc_aes_mul_gf2p2__216__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__214__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__214__delta)));
    __Vfunc_aes_mul_gf2p2__216__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__214__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__214__gamma)));
    __Vfunc_aes_mul_gf2p2__216__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__216__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__216__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__216__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__216__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__216__d)));
    __Vfunc_aes_mul_gf2p2__216__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__216__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__216__d)));
    __Vfunc_aes_mul_gf2p2__216__f = ((((IData)(__Vfunc_aes_mul_gf2p2__216__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__216__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__216__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__216__b)));
    __Vfunc_aes_mul_gf2p2__216__Vfuncout = __Vfunc_aes_mul_gf2p2__216__f;
    __Vfunc_aes_mul_gf2p4__214__b = __Vfunc_aes_mul_gf2p2__216__Vfuncout;
    __Vfunc_aes_mul_gf2p2__217__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__214__delta));
    __Vfunc_aes_mul_gf2p2__217__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__214__gamma));
    __Vfunc_aes_mul_gf2p2__217__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__217__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__217__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__217__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__217__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__217__d)));
    __Vfunc_aes_mul_gf2p2__217__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__217__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__217__d)));
    __Vfunc_aes_mul_gf2p2__217__f = ((((IData)(__Vfunc_aes_mul_gf2p2__217__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__217__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__217__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__217__b)));
    __Vfunc_aes_mul_gf2p2__217__Vfuncout = __Vfunc_aes_mul_gf2p2__217__f;
    __Vfunc_aes_mul_gf2p4__214__c = __Vfunc_aes_mul_gf2p2__217__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__218__g = __Vfunc_aes_mul_gf2p4__214__b;
    __Vfunc_aes_scale_omega2_gf2p2__218__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__218__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__218__g)));
    __Vfunc_aes_scale_omega2_gf2p2__218__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__218__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__214__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__214__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__214__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__218__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__219__g = __Vfunc_aes_mul_gf2p4__214__b;
    __Vfunc_aes_scale_omega2_gf2p2__219__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__219__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__219__g)));
    __Vfunc_aes_scale_omega2_gf2p2__219__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__219__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__214__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__214__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__214__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__219__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__214__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__214__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__214__Vfuncout;
    __Vfunc_aes_mul_gf2p4__172__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__172__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__173__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__172__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__173__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__172__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__173__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__173__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__173__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__173__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__173__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__173__d)));
    __Vfunc_aes_mul_gf2p2__173__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__173__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__173__d)));
    __Vfunc_aes_mul_gf2p2__173__f = ((((IData)(__Vfunc_aes_mul_gf2p2__173__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__173__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__173__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__173__b)));
    __Vfunc_aes_mul_gf2p2__173__Vfuncout = __Vfunc_aes_mul_gf2p2__173__f;
    __Vfunc_aes_mul_gf2p4__172__a = __Vfunc_aes_mul_gf2p2__173__Vfuncout;
    __Vfunc_aes_mul_gf2p2__174__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__172__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__172__delta)));
    __Vfunc_aes_mul_gf2p2__174__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__172__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__172__gamma)));
    __Vfunc_aes_mul_gf2p2__174__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__174__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__174__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__174__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__174__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__174__d)));
    __Vfunc_aes_mul_gf2p2__174__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__174__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__174__d)));
    __Vfunc_aes_mul_gf2p2__174__f = ((((IData)(__Vfunc_aes_mul_gf2p2__174__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__174__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__174__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__174__b)));
    __Vfunc_aes_mul_gf2p2__174__Vfuncout = __Vfunc_aes_mul_gf2p2__174__f;
    __Vfunc_aes_mul_gf2p4__172__b = __Vfunc_aes_mul_gf2p2__174__Vfuncout;
    __Vfunc_aes_mul_gf2p2__175__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__172__delta));
    __Vfunc_aes_mul_gf2p2__175__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__172__gamma));
    __Vfunc_aes_mul_gf2p2__175__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__175__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__175__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__175__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__175__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__175__d)));
    __Vfunc_aes_mul_gf2p2__175__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__175__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__175__d)));
    __Vfunc_aes_mul_gf2p2__175__f = ((((IData)(__Vfunc_aes_mul_gf2p2__175__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__175__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__175__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__175__b)));
    __Vfunc_aes_mul_gf2p2__175__Vfuncout = __Vfunc_aes_mul_gf2p2__175__f;
    __Vfunc_aes_mul_gf2p4__172__c = __Vfunc_aes_mul_gf2p2__175__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__176__g = __Vfunc_aes_mul_gf2p4__172__b;
    __Vfunc_aes_scale_omega2_gf2p2__176__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__176__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__176__g)));
    __Vfunc_aes_scale_omega2_gf2p2__176__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__176__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__172__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__172__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__172__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__176__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__177__g = __Vfunc_aes_mul_gf2p4__172__b;
    __Vfunc_aes_scale_omega2_gf2p2__177__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__177__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__177__g)));
    __Vfunc_aes_scale_omega2_gf2p2__177__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__177__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__172__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__172__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__172__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__177__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__172__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__172__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__172__Vfuncout;
    __Vfunc_aes_mul_gf2p4__190__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__190__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__191__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__190__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__191__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__190__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__191__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__191__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__191__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__191__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__191__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__191__d)));
    __Vfunc_aes_mul_gf2p2__191__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__191__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__191__d)));
    __Vfunc_aes_mul_gf2p2__191__f = ((((IData)(__Vfunc_aes_mul_gf2p2__191__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__191__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__191__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__191__b)));
    __Vfunc_aes_mul_gf2p2__191__Vfuncout = __Vfunc_aes_mul_gf2p2__191__f;
    __Vfunc_aes_mul_gf2p4__190__a = __Vfunc_aes_mul_gf2p2__191__Vfuncout;
    __Vfunc_aes_mul_gf2p2__192__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__190__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__190__delta)));
    __Vfunc_aes_mul_gf2p2__192__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__190__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__190__gamma)));
    __Vfunc_aes_mul_gf2p2__192__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__192__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__192__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__192__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__192__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__192__d)));
    __Vfunc_aes_mul_gf2p2__192__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__192__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__192__d)));
    __Vfunc_aes_mul_gf2p2__192__f = ((((IData)(__Vfunc_aes_mul_gf2p2__192__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__192__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__192__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__192__b)));
    __Vfunc_aes_mul_gf2p2__192__Vfuncout = __Vfunc_aes_mul_gf2p2__192__f;
    __Vfunc_aes_mul_gf2p4__190__b = __Vfunc_aes_mul_gf2p2__192__Vfuncout;
    __Vfunc_aes_mul_gf2p2__193__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__190__delta));
    __Vfunc_aes_mul_gf2p2__193__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__190__gamma));
    __Vfunc_aes_mul_gf2p2__193__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__193__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__193__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__193__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__193__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__193__d)));
    __Vfunc_aes_mul_gf2p2__193__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__193__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__193__d)));
    __Vfunc_aes_mul_gf2p2__193__f = ((((IData)(__Vfunc_aes_mul_gf2p2__193__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__193__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__193__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__193__b)));
    __Vfunc_aes_mul_gf2p2__193__Vfuncout = __Vfunc_aes_mul_gf2p2__193__f;
    __Vfunc_aes_mul_gf2p4__190__c = __Vfunc_aes_mul_gf2p2__193__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__194__g = __Vfunc_aes_mul_gf2p4__190__b;
    __Vfunc_aes_scale_omega2_gf2p2__194__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__194__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__194__g)));
    __Vfunc_aes_scale_omega2_gf2p2__194__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__194__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__190__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__190__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__190__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__194__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__195__g = __Vfunc_aes_mul_gf2p4__190__b;
    __Vfunc_aes_scale_omega2_gf2p2__195__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__195__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__195__g)));
    __Vfunc_aes_scale_omega2_gf2p2__195__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__195__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__190__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__190__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__190__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__195__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__190__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__190__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__190__Vfuncout;
    __Vfunc_aes_mul_gf2p4__196__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__196__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__197__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__196__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__197__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__196__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__197__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__197__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__197__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__197__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__197__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__197__d)));
    __Vfunc_aes_mul_gf2p2__197__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__197__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__197__d)));
    __Vfunc_aes_mul_gf2p2__197__f = ((((IData)(__Vfunc_aes_mul_gf2p2__197__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__197__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__197__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__197__b)));
    __Vfunc_aes_mul_gf2p2__197__Vfuncout = __Vfunc_aes_mul_gf2p2__197__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__a = __Vfunc_aes_mul_gf2p2__197__Vfuncout;
    __Vfunc_aes_mul_gf2p2__198__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__196__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__196__delta)));
    __Vfunc_aes_mul_gf2p2__198__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__196__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__196__gamma)));
    __Vfunc_aes_mul_gf2p2__198__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__198__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__198__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__198__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__198__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__198__d)));
    __Vfunc_aes_mul_gf2p2__198__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__198__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__198__d)));
    __Vfunc_aes_mul_gf2p2__198__f = ((((IData)(__Vfunc_aes_mul_gf2p2__198__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__198__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__198__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__198__b)));
    __Vfunc_aes_mul_gf2p2__198__Vfuncout = __Vfunc_aes_mul_gf2p2__198__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__b = __Vfunc_aes_mul_gf2p2__198__Vfuncout;
    __Vfunc_aes_mul_gf2p2__199__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__196__delta));
    __Vfunc_aes_mul_gf2p2__199__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__196__gamma));
    __Vfunc_aes_mul_gf2p2__199__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__199__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__199__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__199__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__199__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__199__d)));
    __Vfunc_aes_mul_gf2p2__199__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__199__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__199__d)));
    __Vfunc_aes_mul_gf2p2__199__f = ((((IData)(__Vfunc_aes_mul_gf2p2__199__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__199__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__199__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__199__b)));
    __Vfunc_aes_mul_gf2p2__199__Vfuncout = __Vfunc_aes_mul_gf2p2__199__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__c = __Vfunc_aes_mul_gf2p2__199__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__200__g = vlSelf->__Vfunc_aes_mul_gf2p4__196__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__200__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__200__g)));
    __Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__201__g = vlSelf->__Vfunc_aes_mul_gf2p4__196__b;
    __Vfunc_aes_scale_omega2_gf2p2__201__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__201__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__201__g)));
    __Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__201__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__196__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__196__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__196__Vfuncout;
    __Vfunc_aes_mul_gf2p4__208__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__208__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__209__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__208__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__209__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__208__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__209__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__209__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__209__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__209__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__209__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__209__d)));
    __Vfunc_aes_mul_gf2p2__209__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__209__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__209__d)));
    __Vfunc_aes_mul_gf2p2__209__f = ((((IData)(__Vfunc_aes_mul_gf2p2__209__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__209__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__209__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__209__b)));
    __Vfunc_aes_mul_gf2p2__209__Vfuncout = __Vfunc_aes_mul_gf2p2__209__f;
    __Vfunc_aes_mul_gf2p4__208__a = __Vfunc_aes_mul_gf2p2__209__Vfuncout;
    __Vfunc_aes_mul_gf2p2__210__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__208__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__208__delta)));
    __Vfunc_aes_mul_gf2p2__210__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__208__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__208__gamma)));
    __Vfunc_aes_mul_gf2p2__210__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__210__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__210__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__210__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__210__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__210__d)));
    __Vfunc_aes_mul_gf2p2__210__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__210__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__210__d)));
    __Vfunc_aes_mul_gf2p2__210__f = ((((IData)(__Vfunc_aes_mul_gf2p2__210__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__210__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__210__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__210__b)));
    __Vfunc_aes_mul_gf2p2__210__Vfuncout = __Vfunc_aes_mul_gf2p2__210__f;
    __Vfunc_aes_mul_gf2p4__208__b = __Vfunc_aes_mul_gf2p2__210__Vfuncout;
    __Vfunc_aes_mul_gf2p2__211__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__208__delta));
    __Vfunc_aes_mul_gf2p2__211__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__208__gamma));
    __Vfunc_aes_mul_gf2p2__211__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__211__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__211__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__211__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__211__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__211__d)));
    __Vfunc_aes_mul_gf2p2__211__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__211__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__211__d)));
    __Vfunc_aes_mul_gf2p2__211__f = ((((IData)(__Vfunc_aes_mul_gf2p2__211__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__211__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__211__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__211__b)));
    __Vfunc_aes_mul_gf2p2__211__Vfuncout = __Vfunc_aes_mul_gf2p2__211__f;
    __Vfunc_aes_mul_gf2p4__208__c = __Vfunc_aes_mul_gf2p2__211__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__212__g = __Vfunc_aes_mul_gf2p4__208__b;
    __Vfunc_aes_scale_omega2_gf2p2__212__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__212__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__212__g)));
    __Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__212__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__208__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__208__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__213__g = __Vfunc_aes_mul_gf2p4__208__b;
    __Vfunc_aes_scale_omega2_gf2p2__213__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__213__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__213__g)));
    __Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__213__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__208__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__208__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__208__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__208__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__208__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__158__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__158__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__158__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__158__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__158__Vfuncout = __Vfunc_aes_square_gf2p2__158__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__158__Vfuncout;
    __Vfunc_aes_square_gf2p2__159__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__159__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__159__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__159__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__159__Vfuncout = __Vfunc_aes_square_gf2p2__159__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__159__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__66(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__66\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__268__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__268__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__268__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__269__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__269__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__269__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__282__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__282__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__282__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__282__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__282__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__282__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__283__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__283__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__283__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__284__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__284__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__284__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__285__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__285__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__285__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__286__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__286__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__286__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__287__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__287__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__287__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__300__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__300__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__300__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__300__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__300__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__300__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__301__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__301__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__301__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__302__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__302__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__302__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__303__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__303__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__303__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__304__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__304__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__304__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__305__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__305__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__305__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__307__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__307__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__307__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__308__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__308__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__308__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__309__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__309__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__309__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__310__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__311__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__311__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__312__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__312__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__316__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__316__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__316__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__317__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__317__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__317__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__322__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__322__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__323__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__323__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__324__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__324__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__324__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__324__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__324__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__324__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__325__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__325__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__325__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__326__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__326__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__326__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__327__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__327__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__327__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__328__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__328__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__328__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__329__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__329__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__329__d;
    // Body
    __Vfunc_aes_mul_gf2p2__315__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__315__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__315__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__315__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__315__b)));
    __Vfunc_aes_mul_gf2p2__315__Vfuncout = __Vfunc_aes_mul_gf2p2__315__f;
    __Vfunc_aes_mul_gf2p4__312__c = __Vfunc_aes_mul_gf2p2__315__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__316__g = vlSelf->__Vfunc_aes_mul_gf2p4__312__b;
    __Vfunc_aes_scale_omega2_gf2p2__316__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__316__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__316__g)));
    __Vfunc_aes_scale_omega2_gf2p2__316__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__316__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__312__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__312__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__312__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__316__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__317__g = vlSelf->__Vfunc_aes_mul_gf2p4__312__b;
    __Vfunc_aes_scale_omega2_gf2p2__317__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__317__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__317__g)));
    __Vfunc_aes_scale_omega2_gf2p2__317__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__317__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__312__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__312__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__312__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__317__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__312__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__312__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__312__Vfuncout;
    __Vfunc_aes_mul_gf2p4__324__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__324__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__325__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__324__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__325__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__324__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__325__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__325__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__325__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__325__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__325__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__325__d)));
    __Vfunc_aes_mul_gf2p2__325__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__325__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__325__d)));
    __Vfunc_aes_mul_gf2p2__325__f = ((((IData)(__Vfunc_aes_mul_gf2p2__325__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__325__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__325__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__325__b)));
    __Vfunc_aes_mul_gf2p2__325__Vfuncout = __Vfunc_aes_mul_gf2p2__325__f;
    __Vfunc_aes_mul_gf2p4__324__a = __Vfunc_aes_mul_gf2p2__325__Vfuncout;
    __Vfunc_aes_mul_gf2p2__326__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__324__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__324__delta)));
    __Vfunc_aes_mul_gf2p2__326__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__324__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__324__gamma)));
    __Vfunc_aes_mul_gf2p2__326__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__326__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__326__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__326__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__326__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__326__d)));
    __Vfunc_aes_mul_gf2p2__326__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__326__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__326__d)));
    __Vfunc_aes_mul_gf2p2__326__f = ((((IData)(__Vfunc_aes_mul_gf2p2__326__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__326__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__326__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__326__b)));
    __Vfunc_aes_mul_gf2p2__326__Vfuncout = __Vfunc_aes_mul_gf2p2__326__f;
    __Vfunc_aes_mul_gf2p4__324__b = __Vfunc_aes_mul_gf2p2__326__Vfuncout;
    __Vfunc_aes_mul_gf2p2__327__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__324__delta));
    __Vfunc_aes_mul_gf2p2__327__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__324__gamma));
    __Vfunc_aes_mul_gf2p2__327__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__327__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__327__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__327__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__327__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__327__d)));
    __Vfunc_aes_mul_gf2p2__327__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__327__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__327__d)));
    __Vfunc_aes_mul_gf2p2__327__f = ((((IData)(__Vfunc_aes_mul_gf2p2__327__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__327__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__327__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__327__b)));
    __Vfunc_aes_mul_gf2p2__327__Vfuncout = __Vfunc_aes_mul_gf2p2__327__f;
    __Vfunc_aes_mul_gf2p4__324__c = __Vfunc_aes_mul_gf2p2__327__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__328__g = __Vfunc_aes_mul_gf2p4__324__b;
    __Vfunc_aes_scale_omega2_gf2p2__328__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__328__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__328__g)));
    __Vfunc_aes_scale_omega2_gf2p2__328__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__328__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__324__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__324__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__324__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__328__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__329__g = __Vfunc_aes_mul_gf2p4__324__b;
    __Vfunc_aes_scale_omega2_gf2p2__329__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__329__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__329__g)));
    __Vfunc_aes_scale_omega2_gf2p2__329__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__329__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__324__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__324__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__324__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__329__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__324__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__324__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__324__Vfuncout;
    __Vfunc_aes_mul_gf2p4__282__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__282__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__283__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__282__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__283__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__282__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__283__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__283__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__283__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__283__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__283__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__283__d)));
    __Vfunc_aes_mul_gf2p2__283__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__283__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__283__d)));
    __Vfunc_aes_mul_gf2p2__283__f = ((((IData)(__Vfunc_aes_mul_gf2p2__283__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__283__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__283__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__283__b)));
    __Vfunc_aes_mul_gf2p2__283__Vfuncout = __Vfunc_aes_mul_gf2p2__283__f;
    __Vfunc_aes_mul_gf2p4__282__a = __Vfunc_aes_mul_gf2p2__283__Vfuncout;
    __Vfunc_aes_mul_gf2p2__284__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__282__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__282__delta)));
    __Vfunc_aes_mul_gf2p2__284__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__282__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__282__gamma)));
    __Vfunc_aes_mul_gf2p2__284__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__284__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__284__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__284__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__284__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__284__d)));
    __Vfunc_aes_mul_gf2p2__284__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__284__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__284__d)));
    __Vfunc_aes_mul_gf2p2__284__f = ((((IData)(__Vfunc_aes_mul_gf2p2__284__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__284__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__284__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__284__b)));
    __Vfunc_aes_mul_gf2p2__284__Vfuncout = __Vfunc_aes_mul_gf2p2__284__f;
    __Vfunc_aes_mul_gf2p4__282__b = __Vfunc_aes_mul_gf2p2__284__Vfuncout;
    __Vfunc_aes_mul_gf2p2__285__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__282__delta));
    __Vfunc_aes_mul_gf2p2__285__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__282__gamma));
    __Vfunc_aes_mul_gf2p2__285__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__285__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__285__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__285__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__285__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__285__d)));
    __Vfunc_aes_mul_gf2p2__285__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__285__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__285__d)));
    __Vfunc_aes_mul_gf2p2__285__f = ((((IData)(__Vfunc_aes_mul_gf2p2__285__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__285__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__285__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__285__b)));
    __Vfunc_aes_mul_gf2p2__285__Vfuncout = __Vfunc_aes_mul_gf2p2__285__f;
    __Vfunc_aes_mul_gf2p4__282__c = __Vfunc_aes_mul_gf2p2__285__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__286__g = __Vfunc_aes_mul_gf2p4__282__b;
    __Vfunc_aes_scale_omega2_gf2p2__286__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__286__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__286__g)));
    __Vfunc_aes_scale_omega2_gf2p2__286__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__286__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__282__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__282__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__282__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__286__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__287__g = __Vfunc_aes_mul_gf2p4__282__b;
    __Vfunc_aes_scale_omega2_gf2p2__287__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__287__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__287__g)));
    __Vfunc_aes_scale_omega2_gf2p2__287__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__287__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__282__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__282__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__282__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__287__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__282__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__282__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__282__Vfuncout;
    __Vfunc_aes_mul_gf2p4__300__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__300__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__301__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__300__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__301__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__300__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__301__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__301__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__301__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__301__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__301__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__301__d)));
    __Vfunc_aes_mul_gf2p2__301__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__301__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__301__d)));
    __Vfunc_aes_mul_gf2p2__301__f = ((((IData)(__Vfunc_aes_mul_gf2p2__301__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__301__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__301__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__301__b)));
    __Vfunc_aes_mul_gf2p2__301__Vfuncout = __Vfunc_aes_mul_gf2p2__301__f;
    __Vfunc_aes_mul_gf2p4__300__a = __Vfunc_aes_mul_gf2p2__301__Vfuncout;
    __Vfunc_aes_mul_gf2p2__302__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__300__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__300__delta)));
    __Vfunc_aes_mul_gf2p2__302__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__300__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__300__gamma)));
    __Vfunc_aes_mul_gf2p2__302__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__302__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__302__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__302__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__302__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__302__d)));
    __Vfunc_aes_mul_gf2p2__302__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__302__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__302__d)));
    __Vfunc_aes_mul_gf2p2__302__f = ((((IData)(__Vfunc_aes_mul_gf2p2__302__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__302__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__302__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__302__b)));
    __Vfunc_aes_mul_gf2p2__302__Vfuncout = __Vfunc_aes_mul_gf2p2__302__f;
    __Vfunc_aes_mul_gf2p4__300__b = __Vfunc_aes_mul_gf2p2__302__Vfuncout;
    __Vfunc_aes_mul_gf2p2__303__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__300__delta));
    __Vfunc_aes_mul_gf2p2__303__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__300__gamma));
    __Vfunc_aes_mul_gf2p2__303__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__303__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__303__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__303__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__303__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__303__d)));
    __Vfunc_aes_mul_gf2p2__303__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__303__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__303__d)));
    __Vfunc_aes_mul_gf2p2__303__f = ((((IData)(__Vfunc_aes_mul_gf2p2__303__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__303__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__303__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__303__b)));
    __Vfunc_aes_mul_gf2p2__303__Vfuncout = __Vfunc_aes_mul_gf2p2__303__f;
    __Vfunc_aes_mul_gf2p4__300__c = __Vfunc_aes_mul_gf2p2__303__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__304__g = __Vfunc_aes_mul_gf2p4__300__b;
    __Vfunc_aes_scale_omega2_gf2p2__304__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__304__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__304__g)));
    __Vfunc_aes_scale_omega2_gf2p2__304__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__304__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__300__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__300__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__300__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__304__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__305__g = __Vfunc_aes_mul_gf2p4__300__b;
    __Vfunc_aes_scale_omega2_gf2p2__305__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__305__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__305__g)));
    __Vfunc_aes_scale_omega2_gf2p2__305__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__305__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__300__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__300__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__300__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__305__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__300__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__300__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__300__Vfuncout;
    __Vfunc_aes_mul_gf2p4__306__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__306__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__307__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__306__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__307__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__306__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__307__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__307__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__307__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__307__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__307__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__307__d)));
    __Vfunc_aes_mul_gf2p2__307__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__307__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__307__d)));
    __Vfunc_aes_mul_gf2p2__307__f = ((((IData)(__Vfunc_aes_mul_gf2p2__307__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__307__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__307__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__307__b)));
    __Vfunc_aes_mul_gf2p2__307__Vfuncout = __Vfunc_aes_mul_gf2p2__307__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__a = __Vfunc_aes_mul_gf2p2__307__Vfuncout;
    __Vfunc_aes_mul_gf2p2__308__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__306__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__306__delta)));
    __Vfunc_aes_mul_gf2p2__308__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__306__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__306__gamma)));
    __Vfunc_aes_mul_gf2p2__308__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__308__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__308__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__308__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__308__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__308__d)));
    __Vfunc_aes_mul_gf2p2__308__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__308__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__308__d)));
    __Vfunc_aes_mul_gf2p2__308__f = ((((IData)(__Vfunc_aes_mul_gf2p2__308__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__308__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__308__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__308__b)));
    __Vfunc_aes_mul_gf2p2__308__Vfuncout = __Vfunc_aes_mul_gf2p2__308__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__b = __Vfunc_aes_mul_gf2p2__308__Vfuncout;
    __Vfunc_aes_mul_gf2p2__309__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__306__delta));
    __Vfunc_aes_mul_gf2p2__309__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__306__gamma));
    __Vfunc_aes_mul_gf2p2__309__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__309__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__309__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__309__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__309__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__309__d)));
    __Vfunc_aes_mul_gf2p2__309__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__309__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__309__d)));
    __Vfunc_aes_mul_gf2p2__309__f = ((((IData)(__Vfunc_aes_mul_gf2p2__309__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__309__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__309__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__309__b)));
    __Vfunc_aes_mul_gf2p2__309__Vfuncout = __Vfunc_aes_mul_gf2p2__309__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__c = __Vfunc_aes_mul_gf2p2__309__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__310__g = vlSelf->__Vfunc_aes_mul_gf2p4__306__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__310__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__310__g)));
    __Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__311__g = vlSelf->__Vfunc_aes_mul_gf2p4__306__b;
    __Vfunc_aes_scale_omega2_gf2p2__311__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__311__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__311__g)));
    __Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__311__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__306__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__306__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__306__Vfuncout;
    __Vfunc_aes_mul_gf2p4__318__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__318__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__319__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__318__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__319__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__318__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__319__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__319__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__319__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__319__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__319__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__319__d)));
    __Vfunc_aes_mul_gf2p2__319__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__319__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__319__d)));
    __Vfunc_aes_mul_gf2p2__319__f = ((((IData)(__Vfunc_aes_mul_gf2p2__319__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__319__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__319__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__319__b)));
    __Vfunc_aes_mul_gf2p2__319__Vfuncout = __Vfunc_aes_mul_gf2p2__319__f;
    __Vfunc_aes_mul_gf2p4__318__a = __Vfunc_aes_mul_gf2p2__319__Vfuncout;
    __Vfunc_aes_mul_gf2p2__320__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__318__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__318__delta)));
    __Vfunc_aes_mul_gf2p2__320__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__318__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__318__gamma)));
    __Vfunc_aes_mul_gf2p2__320__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__320__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__320__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__320__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__320__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__320__d)));
    __Vfunc_aes_mul_gf2p2__320__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__320__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__320__d)));
    __Vfunc_aes_mul_gf2p2__320__f = ((((IData)(__Vfunc_aes_mul_gf2p2__320__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__320__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__320__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__320__b)));
    __Vfunc_aes_mul_gf2p2__320__Vfuncout = __Vfunc_aes_mul_gf2p2__320__f;
    __Vfunc_aes_mul_gf2p4__318__b = __Vfunc_aes_mul_gf2p2__320__Vfuncout;
    __Vfunc_aes_mul_gf2p2__321__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__318__delta));
    __Vfunc_aes_mul_gf2p2__321__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__318__gamma));
    __Vfunc_aes_mul_gf2p2__321__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__321__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__321__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__321__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__321__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__321__d)));
    __Vfunc_aes_mul_gf2p2__321__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__321__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__321__d)));
    __Vfunc_aes_mul_gf2p2__321__f = ((((IData)(__Vfunc_aes_mul_gf2p2__321__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__321__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__321__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__321__b)));
    __Vfunc_aes_mul_gf2p2__321__Vfuncout = __Vfunc_aes_mul_gf2p2__321__f;
    __Vfunc_aes_mul_gf2p4__318__c = __Vfunc_aes_mul_gf2p2__321__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__322__g = __Vfunc_aes_mul_gf2p4__318__b;
    __Vfunc_aes_scale_omega2_gf2p2__322__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__322__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__322__g)));
    __Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__322__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__318__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__318__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__323__g = __Vfunc_aes_mul_gf2p4__318__b;
    __Vfunc_aes_scale_omega2_gf2p2__323__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__323__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__323__g)));
    __Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__323__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__318__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__318__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__318__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__318__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__318__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__268__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__268__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__268__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__268__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__268__Vfuncout = __Vfunc_aes_square_gf2p2__268__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__268__Vfuncout;
    __Vfunc_aes_square_gf2p2__269__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__269__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__269__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__269__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__269__Vfuncout = __Vfunc_aes_square_gf2p2__269__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__269__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__68(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__68\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__392__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__392__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__392__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__392__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__392__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__392__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__393__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__393__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__393__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__393__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__394__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__394__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__394__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__394__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__395__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__395__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__395__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__395__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__396__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__396__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__396__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__397__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__397__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__397__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__410__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__410__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__410__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__410__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__410__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__410__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__411__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__411__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__411__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__411__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__412__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__412__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__412__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__412__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__413__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__413__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__413__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__413__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__414__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__414__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__414__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__415__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__415__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__415__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__417__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__417__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__417__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__417__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__418__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__418__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__418__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__418__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__419__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__419__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__419__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__419__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__420__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__421__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__421__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__422__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__426__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__426__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__427__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__427__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__432__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__432__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__433__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__433__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__434__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__434__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__434__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__434__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__434__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__434__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__435__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__435__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__435__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__435__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__436__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__436__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__436__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__436__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__437__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__437__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__437__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__437__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__438__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__438__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__438__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__439__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__439__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__439__d;
    // Body
    __Vfunc_aes_mul_gf2p2__425__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__425__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__425__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__425__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__425__b)));
    __Vfunc_aes_mul_gf2p2__425__Vfuncout = __Vfunc_aes_mul_gf2p2__425__f;
    __Vfunc_aes_mul_gf2p4__422__c = __Vfunc_aes_mul_gf2p2__425__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__426__g = vlSelf->__Vfunc_aes_mul_gf2p4__422__b;
    __Vfunc_aes_scale_omega2_gf2p2__426__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__426__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__426__g)));
    __Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__426__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__422__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__422__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__427__g = vlSelf->__Vfunc_aes_mul_gf2p4__422__b;
    __Vfunc_aes_scale_omega2_gf2p2__427__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__427__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__427__g)));
    __Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__427__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__422__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__422__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__422__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__422__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__422__Vfuncout;
    __Vfunc_aes_mul_gf2p4__434__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__434__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__435__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__434__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__435__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__434__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__435__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__435__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__435__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__435__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__435__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__435__d)));
    __Vfunc_aes_mul_gf2p2__435__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__435__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__435__d)));
    __Vfunc_aes_mul_gf2p2__435__f = ((((IData)(__Vfunc_aes_mul_gf2p2__435__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__435__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__435__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__435__b)));
    __Vfunc_aes_mul_gf2p2__435__Vfuncout = __Vfunc_aes_mul_gf2p2__435__f;
    __Vfunc_aes_mul_gf2p4__434__a = __Vfunc_aes_mul_gf2p2__435__Vfuncout;
    __Vfunc_aes_mul_gf2p2__436__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__434__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__434__delta)));
    __Vfunc_aes_mul_gf2p2__436__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__434__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__434__gamma)));
    __Vfunc_aes_mul_gf2p2__436__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__436__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__436__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__436__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__436__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__436__d)));
    __Vfunc_aes_mul_gf2p2__436__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__436__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__436__d)));
    __Vfunc_aes_mul_gf2p2__436__f = ((((IData)(__Vfunc_aes_mul_gf2p2__436__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__436__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__436__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__436__b)));
    __Vfunc_aes_mul_gf2p2__436__Vfuncout = __Vfunc_aes_mul_gf2p2__436__f;
    __Vfunc_aes_mul_gf2p4__434__b = __Vfunc_aes_mul_gf2p2__436__Vfuncout;
    __Vfunc_aes_mul_gf2p2__437__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__434__delta));
    __Vfunc_aes_mul_gf2p2__437__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__434__gamma));
    __Vfunc_aes_mul_gf2p2__437__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__437__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__437__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__437__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__437__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__437__d)));
    __Vfunc_aes_mul_gf2p2__437__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__437__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__437__d)));
    __Vfunc_aes_mul_gf2p2__437__f = ((((IData)(__Vfunc_aes_mul_gf2p2__437__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__437__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__437__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__437__b)));
    __Vfunc_aes_mul_gf2p2__437__Vfuncout = __Vfunc_aes_mul_gf2p2__437__f;
    __Vfunc_aes_mul_gf2p4__434__c = __Vfunc_aes_mul_gf2p2__437__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__438__g = __Vfunc_aes_mul_gf2p4__434__b;
    __Vfunc_aes_scale_omega2_gf2p2__438__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__438__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__438__g)));
    __Vfunc_aes_scale_omega2_gf2p2__438__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__438__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__434__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__434__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__434__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__438__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__439__g = __Vfunc_aes_mul_gf2p4__434__b;
    __Vfunc_aes_scale_omega2_gf2p2__439__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__439__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__439__g)));
    __Vfunc_aes_scale_omega2_gf2p2__439__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__439__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__434__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__434__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__434__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__439__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__434__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__434__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__434__Vfuncout;
    __Vfunc_aes_mul_gf2p4__392__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__392__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__393__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__392__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__393__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__392__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__393__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__393__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__393__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__393__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__393__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__393__d)));
    __Vfunc_aes_mul_gf2p2__393__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__393__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__393__d)));
    __Vfunc_aes_mul_gf2p2__393__f = ((((IData)(__Vfunc_aes_mul_gf2p2__393__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__393__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__393__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__393__b)));
    __Vfunc_aes_mul_gf2p2__393__Vfuncout = __Vfunc_aes_mul_gf2p2__393__f;
    __Vfunc_aes_mul_gf2p4__392__a = __Vfunc_aes_mul_gf2p2__393__Vfuncout;
    __Vfunc_aes_mul_gf2p2__394__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__392__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__392__delta)));
    __Vfunc_aes_mul_gf2p2__394__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__392__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__392__gamma)));
    __Vfunc_aes_mul_gf2p2__394__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__394__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__394__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__394__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__394__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__394__d)));
    __Vfunc_aes_mul_gf2p2__394__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__394__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__394__d)));
    __Vfunc_aes_mul_gf2p2__394__f = ((((IData)(__Vfunc_aes_mul_gf2p2__394__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__394__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__394__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__394__b)));
    __Vfunc_aes_mul_gf2p2__394__Vfuncout = __Vfunc_aes_mul_gf2p2__394__f;
    __Vfunc_aes_mul_gf2p4__392__b = __Vfunc_aes_mul_gf2p2__394__Vfuncout;
    __Vfunc_aes_mul_gf2p2__395__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__392__delta));
    __Vfunc_aes_mul_gf2p2__395__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__392__gamma));
    __Vfunc_aes_mul_gf2p2__395__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__395__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__395__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__395__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__395__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__395__d)));
    __Vfunc_aes_mul_gf2p2__395__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__395__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__395__d)));
    __Vfunc_aes_mul_gf2p2__395__f = ((((IData)(__Vfunc_aes_mul_gf2p2__395__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__395__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__395__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__395__b)));
    __Vfunc_aes_mul_gf2p2__395__Vfuncout = __Vfunc_aes_mul_gf2p2__395__f;
    __Vfunc_aes_mul_gf2p4__392__c = __Vfunc_aes_mul_gf2p2__395__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__396__g = __Vfunc_aes_mul_gf2p4__392__b;
    __Vfunc_aes_scale_omega2_gf2p2__396__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__396__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__396__g)));
    __Vfunc_aes_scale_omega2_gf2p2__396__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__396__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__392__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__392__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__392__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__396__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__397__g = __Vfunc_aes_mul_gf2p4__392__b;
    __Vfunc_aes_scale_omega2_gf2p2__397__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__397__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__397__g)));
    __Vfunc_aes_scale_omega2_gf2p2__397__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__397__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__392__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__392__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__392__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__397__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__392__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__392__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__392__Vfuncout;
    __Vfunc_aes_mul_gf2p4__410__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__410__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__411__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__410__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__411__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__410__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__411__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__411__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__411__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__411__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__411__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__411__d)));
    __Vfunc_aes_mul_gf2p2__411__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__411__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__411__d)));
    __Vfunc_aes_mul_gf2p2__411__f = ((((IData)(__Vfunc_aes_mul_gf2p2__411__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__411__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__411__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__411__b)));
    __Vfunc_aes_mul_gf2p2__411__Vfuncout = __Vfunc_aes_mul_gf2p2__411__f;
    __Vfunc_aes_mul_gf2p4__410__a = __Vfunc_aes_mul_gf2p2__411__Vfuncout;
    __Vfunc_aes_mul_gf2p2__412__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__410__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__410__delta)));
    __Vfunc_aes_mul_gf2p2__412__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__410__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__410__gamma)));
    __Vfunc_aes_mul_gf2p2__412__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__412__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__412__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__412__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__412__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__412__d)));
    __Vfunc_aes_mul_gf2p2__412__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__412__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__412__d)));
    __Vfunc_aes_mul_gf2p2__412__f = ((((IData)(__Vfunc_aes_mul_gf2p2__412__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__412__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__412__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__412__b)));
    __Vfunc_aes_mul_gf2p2__412__Vfuncout = __Vfunc_aes_mul_gf2p2__412__f;
    __Vfunc_aes_mul_gf2p4__410__b = __Vfunc_aes_mul_gf2p2__412__Vfuncout;
    __Vfunc_aes_mul_gf2p2__413__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__410__delta));
    __Vfunc_aes_mul_gf2p2__413__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__410__gamma));
    __Vfunc_aes_mul_gf2p2__413__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__413__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__413__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__413__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__413__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__413__d)));
    __Vfunc_aes_mul_gf2p2__413__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__413__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__413__d)));
    __Vfunc_aes_mul_gf2p2__413__f = ((((IData)(__Vfunc_aes_mul_gf2p2__413__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__413__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__413__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__413__b)));
    __Vfunc_aes_mul_gf2p2__413__Vfuncout = __Vfunc_aes_mul_gf2p2__413__f;
    __Vfunc_aes_mul_gf2p4__410__c = __Vfunc_aes_mul_gf2p2__413__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__414__g = __Vfunc_aes_mul_gf2p4__410__b;
    __Vfunc_aes_scale_omega2_gf2p2__414__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__414__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__414__g)));
    __Vfunc_aes_scale_omega2_gf2p2__414__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__414__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__410__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__410__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__410__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__414__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__415__g = __Vfunc_aes_mul_gf2p4__410__b;
    __Vfunc_aes_scale_omega2_gf2p2__415__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__415__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__415__g)));
    __Vfunc_aes_scale_omega2_gf2p2__415__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__415__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__410__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__410__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__410__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__415__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__410__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__410__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__410__Vfuncout;
    __Vfunc_aes_mul_gf2p4__416__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__416__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__417__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__416__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__417__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__416__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__417__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__417__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__417__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__417__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__417__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__417__d)));
    __Vfunc_aes_mul_gf2p2__417__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__417__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__417__d)));
    __Vfunc_aes_mul_gf2p2__417__f = ((((IData)(__Vfunc_aes_mul_gf2p2__417__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__417__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__417__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__417__b)));
    __Vfunc_aes_mul_gf2p2__417__Vfuncout = __Vfunc_aes_mul_gf2p2__417__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__a = __Vfunc_aes_mul_gf2p2__417__Vfuncout;
    __Vfunc_aes_mul_gf2p2__418__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__416__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__416__delta)));
    __Vfunc_aes_mul_gf2p2__418__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__416__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__416__gamma)));
    __Vfunc_aes_mul_gf2p2__418__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__418__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__418__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__418__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__418__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__418__d)));
    __Vfunc_aes_mul_gf2p2__418__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__418__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__418__d)));
    __Vfunc_aes_mul_gf2p2__418__f = ((((IData)(__Vfunc_aes_mul_gf2p2__418__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__418__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__418__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__418__b)));
    __Vfunc_aes_mul_gf2p2__418__Vfuncout = __Vfunc_aes_mul_gf2p2__418__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__b = __Vfunc_aes_mul_gf2p2__418__Vfuncout;
    __Vfunc_aes_mul_gf2p2__419__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__416__delta));
    __Vfunc_aes_mul_gf2p2__419__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__416__gamma));
    __Vfunc_aes_mul_gf2p2__419__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__419__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__419__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__419__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__419__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__419__d)));
    __Vfunc_aes_mul_gf2p2__419__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__419__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__419__d)));
    __Vfunc_aes_mul_gf2p2__419__f = ((((IData)(__Vfunc_aes_mul_gf2p2__419__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__419__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__419__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__419__b)));
    __Vfunc_aes_mul_gf2p2__419__Vfuncout = __Vfunc_aes_mul_gf2p2__419__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__c = __Vfunc_aes_mul_gf2p2__419__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__420__g = vlSelf->__Vfunc_aes_mul_gf2p4__416__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__420__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__420__g)));
    __Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__421__g = vlSelf->__Vfunc_aes_mul_gf2p4__416__b;
    __Vfunc_aes_scale_omega2_gf2p2__421__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__421__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__421__g)));
    __Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__421__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__416__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__416__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__416__Vfuncout;
    __Vfunc_aes_mul_gf2p4__428__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__428__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__429__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__428__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__429__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__428__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__429__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__429__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__429__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__429__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__429__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__429__d)));
    __Vfunc_aes_mul_gf2p2__429__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__429__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__429__d)));
    __Vfunc_aes_mul_gf2p2__429__f = ((((IData)(__Vfunc_aes_mul_gf2p2__429__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__429__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__429__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__429__b)));
    __Vfunc_aes_mul_gf2p2__429__Vfuncout = __Vfunc_aes_mul_gf2p2__429__f;
    __Vfunc_aes_mul_gf2p4__428__a = __Vfunc_aes_mul_gf2p2__429__Vfuncout;
    __Vfunc_aes_mul_gf2p2__430__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__428__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__428__delta)));
    __Vfunc_aes_mul_gf2p2__430__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__428__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__428__gamma)));
    __Vfunc_aes_mul_gf2p2__430__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__430__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__430__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__430__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__430__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__430__d)));
    __Vfunc_aes_mul_gf2p2__430__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__430__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__430__d)));
    __Vfunc_aes_mul_gf2p2__430__f = ((((IData)(__Vfunc_aes_mul_gf2p2__430__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__430__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__430__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__430__b)));
    __Vfunc_aes_mul_gf2p2__430__Vfuncout = __Vfunc_aes_mul_gf2p2__430__f;
    __Vfunc_aes_mul_gf2p4__428__b = __Vfunc_aes_mul_gf2p2__430__Vfuncout;
    __Vfunc_aes_mul_gf2p2__431__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__428__delta));
    __Vfunc_aes_mul_gf2p2__431__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__428__gamma));
    __Vfunc_aes_mul_gf2p2__431__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__431__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__431__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__431__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__431__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__431__d)));
    __Vfunc_aes_mul_gf2p2__431__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__431__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__431__d)));
    __Vfunc_aes_mul_gf2p2__431__f = ((((IData)(__Vfunc_aes_mul_gf2p2__431__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__431__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__431__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__431__b)));
    __Vfunc_aes_mul_gf2p2__431__Vfuncout = __Vfunc_aes_mul_gf2p2__431__f;
    __Vfunc_aes_mul_gf2p4__428__c = __Vfunc_aes_mul_gf2p2__431__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__432__g = __Vfunc_aes_mul_gf2p4__428__b;
    __Vfunc_aes_scale_omega2_gf2p2__432__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__432__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__432__g)));
    __Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__432__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__428__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__428__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__433__g = __Vfunc_aes_mul_gf2p4__428__b;
    __Vfunc_aes_scale_omega2_gf2p2__433__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__433__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__433__g)));
    __Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__433__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__428__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__428__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__428__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__428__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__428__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__378__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__378__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__378__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__378__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__378__Vfuncout = __Vfunc_aes_square_gf2p2__378__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__378__Vfuncout;
    __Vfunc_aes_square_gf2p2__379__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__379__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__379__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__379__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__379__Vfuncout = __Vfunc_aes_square_gf2p2__379__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__379__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__70(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__70\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__488__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__488__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__488__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__489__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__489__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__489__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__502__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__502__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__502__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__502__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__502__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__502__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__503__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__503__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__503__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__503__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__504__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__504__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__504__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__504__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__505__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__505__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__505__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__505__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__506__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__506__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__506__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__507__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__507__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__507__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__520__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__520__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__520__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__520__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__520__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__520__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__521__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__521__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__521__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__521__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__522__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__522__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__522__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__522__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__523__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__523__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__523__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__523__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__524__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__524__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__524__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__525__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__525__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__525__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__527__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__527__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__527__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__527__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__528__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__528__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__528__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__528__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__529__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__529__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__529__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__529__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__530__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__531__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__531__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__532__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__532__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__535__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__536__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__536__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__536__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__537__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__537__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__537__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__542__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__542__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__543__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__543__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__544__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__544__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__544__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__544__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__544__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__544__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__545__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__545__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__545__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__545__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__546__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__546__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__546__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__546__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__547__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__547__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__547__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__547__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__548__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__548__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__548__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__549__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__549__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__549__d;
    // Body
    __Vfunc_aes_mul_gf2p2__535__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__535__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__535__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__535__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__535__b)));
    __Vfunc_aes_mul_gf2p2__535__Vfuncout = __Vfunc_aes_mul_gf2p2__535__f;
    __Vfunc_aes_mul_gf2p4__532__c = __Vfunc_aes_mul_gf2p2__535__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__536__g = vlSelf->__Vfunc_aes_mul_gf2p4__532__b;
    __Vfunc_aes_scale_omega2_gf2p2__536__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__536__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__536__g)));
    __Vfunc_aes_scale_omega2_gf2p2__536__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__536__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__532__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__532__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__532__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__536__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__537__g = vlSelf->__Vfunc_aes_mul_gf2p4__532__b;
    __Vfunc_aes_scale_omega2_gf2p2__537__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__537__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__537__g)));
    __Vfunc_aes_scale_omega2_gf2p2__537__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__537__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__532__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__532__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__532__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__537__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__532__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__532__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__532__Vfuncout;
    __Vfunc_aes_mul_gf2p4__544__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__544__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__545__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__544__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__545__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__544__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__545__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__545__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__545__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__545__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__545__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__545__d)));
    __Vfunc_aes_mul_gf2p2__545__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__545__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__545__d)));
    __Vfunc_aes_mul_gf2p2__545__f = ((((IData)(__Vfunc_aes_mul_gf2p2__545__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__545__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__545__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__545__b)));
    __Vfunc_aes_mul_gf2p2__545__Vfuncout = __Vfunc_aes_mul_gf2p2__545__f;
    __Vfunc_aes_mul_gf2p4__544__a = __Vfunc_aes_mul_gf2p2__545__Vfuncout;
    __Vfunc_aes_mul_gf2p2__546__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__544__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__544__delta)));
    __Vfunc_aes_mul_gf2p2__546__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__544__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__544__gamma)));
    __Vfunc_aes_mul_gf2p2__546__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__546__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__546__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__546__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__546__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__546__d)));
    __Vfunc_aes_mul_gf2p2__546__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__546__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__546__d)));
    __Vfunc_aes_mul_gf2p2__546__f = ((((IData)(__Vfunc_aes_mul_gf2p2__546__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__546__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__546__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__546__b)));
    __Vfunc_aes_mul_gf2p2__546__Vfuncout = __Vfunc_aes_mul_gf2p2__546__f;
    __Vfunc_aes_mul_gf2p4__544__b = __Vfunc_aes_mul_gf2p2__546__Vfuncout;
    __Vfunc_aes_mul_gf2p2__547__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__544__delta));
    __Vfunc_aes_mul_gf2p2__547__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__544__gamma));
    __Vfunc_aes_mul_gf2p2__547__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__547__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__547__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__547__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__547__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__547__d)));
    __Vfunc_aes_mul_gf2p2__547__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__547__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__547__d)));
    __Vfunc_aes_mul_gf2p2__547__f = ((((IData)(__Vfunc_aes_mul_gf2p2__547__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__547__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__547__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__547__b)));
    __Vfunc_aes_mul_gf2p2__547__Vfuncout = __Vfunc_aes_mul_gf2p2__547__f;
    __Vfunc_aes_mul_gf2p4__544__c = __Vfunc_aes_mul_gf2p2__547__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__548__g = __Vfunc_aes_mul_gf2p4__544__b;
    __Vfunc_aes_scale_omega2_gf2p2__548__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__548__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__548__g)));
    __Vfunc_aes_scale_omega2_gf2p2__548__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__548__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__544__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__544__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__544__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__548__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__549__g = __Vfunc_aes_mul_gf2p4__544__b;
    __Vfunc_aes_scale_omega2_gf2p2__549__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__549__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__549__g)));
    __Vfunc_aes_scale_omega2_gf2p2__549__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__549__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__544__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__544__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__544__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__549__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__544__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__544__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__544__Vfuncout;
    __Vfunc_aes_mul_gf2p4__502__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__502__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__503__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__502__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__503__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__502__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__503__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__503__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__503__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__503__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__503__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__503__d)));
    __Vfunc_aes_mul_gf2p2__503__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__503__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__503__d)));
    __Vfunc_aes_mul_gf2p2__503__f = ((((IData)(__Vfunc_aes_mul_gf2p2__503__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__503__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__503__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__503__b)));
    __Vfunc_aes_mul_gf2p2__503__Vfuncout = __Vfunc_aes_mul_gf2p2__503__f;
    __Vfunc_aes_mul_gf2p4__502__a = __Vfunc_aes_mul_gf2p2__503__Vfuncout;
    __Vfunc_aes_mul_gf2p2__504__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__502__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__502__delta)));
    __Vfunc_aes_mul_gf2p2__504__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__502__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__502__gamma)));
    __Vfunc_aes_mul_gf2p2__504__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__504__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__504__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__504__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__504__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__504__d)));
    __Vfunc_aes_mul_gf2p2__504__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__504__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__504__d)));
    __Vfunc_aes_mul_gf2p2__504__f = ((((IData)(__Vfunc_aes_mul_gf2p2__504__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__504__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__504__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__504__b)));
    __Vfunc_aes_mul_gf2p2__504__Vfuncout = __Vfunc_aes_mul_gf2p2__504__f;
    __Vfunc_aes_mul_gf2p4__502__b = __Vfunc_aes_mul_gf2p2__504__Vfuncout;
    __Vfunc_aes_mul_gf2p2__505__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__502__delta));
    __Vfunc_aes_mul_gf2p2__505__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__502__gamma));
    __Vfunc_aes_mul_gf2p2__505__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__505__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__505__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__505__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__505__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__505__d)));
    __Vfunc_aes_mul_gf2p2__505__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__505__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__505__d)));
    __Vfunc_aes_mul_gf2p2__505__f = ((((IData)(__Vfunc_aes_mul_gf2p2__505__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__505__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__505__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__505__b)));
    __Vfunc_aes_mul_gf2p2__505__Vfuncout = __Vfunc_aes_mul_gf2p2__505__f;
    __Vfunc_aes_mul_gf2p4__502__c = __Vfunc_aes_mul_gf2p2__505__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__506__g = __Vfunc_aes_mul_gf2p4__502__b;
    __Vfunc_aes_scale_omega2_gf2p2__506__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__506__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__506__g)));
    __Vfunc_aes_scale_omega2_gf2p2__506__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__506__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__502__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__502__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__502__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__506__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__507__g = __Vfunc_aes_mul_gf2p4__502__b;
    __Vfunc_aes_scale_omega2_gf2p2__507__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__507__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__507__g)));
    __Vfunc_aes_scale_omega2_gf2p2__507__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__507__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__502__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__502__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__502__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__507__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__502__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__502__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__502__Vfuncout;
    __Vfunc_aes_mul_gf2p4__520__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__520__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__521__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__520__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__521__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__520__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__521__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__521__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__521__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__521__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__521__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__521__d)));
    __Vfunc_aes_mul_gf2p2__521__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__521__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__521__d)));
    __Vfunc_aes_mul_gf2p2__521__f = ((((IData)(__Vfunc_aes_mul_gf2p2__521__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__521__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__521__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__521__b)));
    __Vfunc_aes_mul_gf2p2__521__Vfuncout = __Vfunc_aes_mul_gf2p2__521__f;
    __Vfunc_aes_mul_gf2p4__520__a = __Vfunc_aes_mul_gf2p2__521__Vfuncout;
    __Vfunc_aes_mul_gf2p2__522__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__520__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__520__delta)));
    __Vfunc_aes_mul_gf2p2__522__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__520__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__520__gamma)));
    __Vfunc_aes_mul_gf2p2__522__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__522__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__522__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__522__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__522__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__522__d)));
    __Vfunc_aes_mul_gf2p2__522__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__522__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__522__d)));
    __Vfunc_aes_mul_gf2p2__522__f = ((((IData)(__Vfunc_aes_mul_gf2p2__522__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__522__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__522__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__522__b)));
    __Vfunc_aes_mul_gf2p2__522__Vfuncout = __Vfunc_aes_mul_gf2p2__522__f;
    __Vfunc_aes_mul_gf2p4__520__b = __Vfunc_aes_mul_gf2p2__522__Vfuncout;
    __Vfunc_aes_mul_gf2p2__523__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__520__delta));
    __Vfunc_aes_mul_gf2p2__523__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__520__gamma));
    __Vfunc_aes_mul_gf2p2__523__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__523__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__523__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__523__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__523__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__523__d)));
    __Vfunc_aes_mul_gf2p2__523__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__523__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__523__d)));
    __Vfunc_aes_mul_gf2p2__523__f = ((((IData)(__Vfunc_aes_mul_gf2p2__523__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__523__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__523__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__523__b)));
    __Vfunc_aes_mul_gf2p2__523__Vfuncout = __Vfunc_aes_mul_gf2p2__523__f;
    __Vfunc_aes_mul_gf2p4__520__c = __Vfunc_aes_mul_gf2p2__523__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__524__g = __Vfunc_aes_mul_gf2p4__520__b;
    __Vfunc_aes_scale_omega2_gf2p2__524__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__524__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__524__g)));
    __Vfunc_aes_scale_omega2_gf2p2__524__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__524__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__520__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__520__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__520__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__524__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__525__g = __Vfunc_aes_mul_gf2p4__520__b;
    __Vfunc_aes_scale_omega2_gf2p2__525__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__525__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__525__g)));
    __Vfunc_aes_scale_omega2_gf2p2__525__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__525__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__520__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__520__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__520__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__525__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__520__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__520__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__520__Vfuncout;
    __Vfunc_aes_mul_gf2p4__526__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__526__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__527__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__526__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__527__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__526__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__527__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__527__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__527__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__527__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__527__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__527__d)));
    __Vfunc_aes_mul_gf2p2__527__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__527__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__527__d)));
    __Vfunc_aes_mul_gf2p2__527__f = ((((IData)(__Vfunc_aes_mul_gf2p2__527__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__527__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__527__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__527__b)));
    __Vfunc_aes_mul_gf2p2__527__Vfuncout = __Vfunc_aes_mul_gf2p2__527__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__a = __Vfunc_aes_mul_gf2p2__527__Vfuncout;
    __Vfunc_aes_mul_gf2p2__528__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__526__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__526__delta)));
    __Vfunc_aes_mul_gf2p2__528__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__526__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__526__gamma)));
    __Vfunc_aes_mul_gf2p2__528__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__528__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__528__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__528__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__528__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__528__d)));
    __Vfunc_aes_mul_gf2p2__528__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__528__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__528__d)));
    __Vfunc_aes_mul_gf2p2__528__f = ((((IData)(__Vfunc_aes_mul_gf2p2__528__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__528__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__528__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__528__b)));
    __Vfunc_aes_mul_gf2p2__528__Vfuncout = __Vfunc_aes_mul_gf2p2__528__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__b = __Vfunc_aes_mul_gf2p2__528__Vfuncout;
    __Vfunc_aes_mul_gf2p2__529__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__526__delta));
    __Vfunc_aes_mul_gf2p2__529__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__526__gamma));
    __Vfunc_aes_mul_gf2p2__529__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__529__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__529__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__529__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__529__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__529__d)));
    __Vfunc_aes_mul_gf2p2__529__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__529__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__529__d)));
    __Vfunc_aes_mul_gf2p2__529__f = ((((IData)(__Vfunc_aes_mul_gf2p2__529__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__529__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__529__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__529__b)));
    __Vfunc_aes_mul_gf2p2__529__Vfuncout = __Vfunc_aes_mul_gf2p2__529__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__c = __Vfunc_aes_mul_gf2p2__529__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__530__g = vlSelf->__Vfunc_aes_mul_gf2p4__526__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__530__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__530__g)));
    __Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__531__g = vlSelf->__Vfunc_aes_mul_gf2p4__526__b;
    __Vfunc_aes_scale_omega2_gf2p2__531__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__531__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__531__g)));
    __Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__531__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__526__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__526__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__526__Vfuncout;
    __Vfunc_aes_mul_gf2p4__538__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__538__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__539__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__538__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__539__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__538__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__539__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__539__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__539__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__539__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__539__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__539__d)));
    __Vfunc_aes_mul_gf2p2__539__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__539__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__539__d)));
    __Vfunc_aes_mul_gf2p2__539__f = ((((IData)(__Vfunc_aes_mul_gf2p2__539__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__539__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__539__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__539__b)));
    __Vfunc_aes_mul_gf2p2__539__Vfuncout = __Vfunc_aes_mul_gf2p2__539__f;
    __Vfunc_aes_mul_gf2p4__538__a = __Vfunc_aes_mul_gf2p2__539__Vfuncout;
    __Vfunc_aes_mul_gf2p2__540__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__538__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__538__delta)));
    __Vfunc_aes_mul_gf2p2__540__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__538__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__538__gamma)));
    __Vfunc_aes_mul_gf2p2__540__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__540__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__540__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__540__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__540__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__540__d)));
    __Vfunc_aes_mul_gf2p2__540__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__540__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__540__d)));
    __Vfunc_aes_mul_gf2p2__540__f = ((((IData)(__Vfunc_aes_mul_gf2p2__540__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__540__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__540__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__540__b)));
    __Vfunc_aes_mul_gf2p2__540__Vfuncout = __Vfunc_aes_mul_gf2p2__540__f;
    __Vfunc_aes_mul_gf2p4__538__b = __Vfunc_aes_mul_gf2p2__540__Vfuncout;
    __Vfunc_aes_mul_gf2p2__541__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__538__delta));
    __Vfunc_aes_mul_gf2p2__541__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__538__gamma));
    __Vfunc_aes_mul_gf2p2__541__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__541__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__541__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__541__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__541__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__541__d)));
    __Vfunc_aes_mul_gf2p2__541__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__541__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__541__d)));
    __Vfunc_aes_mul_gf2p2__541__f = ((((IData)(__Vfunc_aes_mul_gf2p2__541__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__541__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__541__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__541__b)));
    __Vfunc_aes_mul_gf2p2__541__Vfuncout = __Vfunc_aes_mul_gf2p2__541__f;
    __Vfunc_aes_mul_gf2p4__538__c = __Vfunc_aes_mul_gf2p2__541__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__542__g = __Vfunc_aes_mul_gf2p4__538__b;
    __Vfunc_aes_scale_omega2_gf2p2__542__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__542__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__542__g)));
    __Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__542__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__538__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__538__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__543__g = __Vfunc_aes_mul_gf2p4__538__b;
    __Vfunc_aes_scale_omega2_gf2p2__543__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__543__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__543__g)));
    __Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__543__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__538__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__538__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__538__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__538__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__538__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__488__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__488__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__488__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__488__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__488__Vfuncout = __Vfunc_aes_square_gf2p2__488__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__488__Vfuncout;
    __Vfunc_aes_square_gf2p2__489__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__489__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__489__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__489__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__489__Vfuncout = __Vfunc_aes_square_gf2p2__489__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__489__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__72(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__72\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__612__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__612__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__612__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__612__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__612__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__612__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__613__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__613__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__613__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__613__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__614__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__614__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__614__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__614__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__615__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__615__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__615__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__615__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__616__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__616__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__616__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__617__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__617__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__617__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__630__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__630__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__630__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__630__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__630__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__630__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__631__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__631__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__631__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__631__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__632__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__632__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__632__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__632__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__633__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__633__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__633__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__633__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__634__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__634__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__634__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__635__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__635__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__635__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__637__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__637__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__637__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__637__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__638__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__638__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__638__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__638__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__639__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__639__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__639__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__639__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__640__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__641__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__641__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__642__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__646__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__646__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__647__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__647__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__652__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__652__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__653__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__653__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__654__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__654__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__654__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__654__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__654__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__654__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__655__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__655__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__655__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__655__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__656__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__656__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__656__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__656__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__657__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__657__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__657__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__657__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__658__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__658__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__658__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__659__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__659__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__659__d;
    // Body
    __Vfunc_aes_mul_gf2p2__645__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__645__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__645__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__645__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__645__b)));
    __Vfunc_aes_mul_gf2p2__645__Vfuncout = __Vfunc_aes_mul_gf2p2__645__f;
    __Vfunc_aes_mul_gf2p4__642__c = __Vfunc_aes_mul_gf2p2__645__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__646__g = vlSelf->__Vfunc_aes_mul_gf2p4__642__b;
    __Vfunc_aes_scale_omega2_gf2p2__646__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__646__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__646__g)));
    __Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__646__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__642__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__642__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__642__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__647__g = vlSelf->__Vfunc_aes_mul_gf2p4__642__b;
    __Vfunc_aes_scale_omega2_gf2p2__647__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__647__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__647__g)));
    __Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__647__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__642__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__642__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__642__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__642__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__642__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__642__Vfuncout;
    __Vfunc_aes_mul_gf2p4__654__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__654__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__655__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__654__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__655__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__654__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__655__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__655__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__655__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__655__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__655__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__655__d)));
    __Vfunc_aes_mul_gf2p2__655__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__655__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__655__d)));
    __Vfunc_aes_mul_gf2p2__655__f = ((((IData)(__Vfunc_aes_mul_gf2p2__655__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__655__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__655__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__655__b)));
    __Vfunc_aes_mul_gf2p2__655__Vfuncout = __Vfunc_aes_mul_gf2p2__655__f;
    __Vfunc_aes_mul_gf2p4__654__a = __Vfunc_aes_mul_gf2p2__655__Vfuncout;
    __Vfunc_aes_mul_gf2p2__656__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__654__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__654__delta)));
    __Vfunc_aes_mul_gf2p2__656__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__654__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__654__gamma)));
    __Vfunc_aes_mul_gf2p2__656__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__656__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__656__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__656__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__656__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__656__d)));
    __Vfunc_aes_mul_gf2p2__656__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__656__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__656__d)));
    __Vfunc_aes_mul_gf2p2__656__f = ((((IData)(__Vfunc_aes_mul_gf2p2__656__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__656__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__656__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__656__b)));
    __Vfunc_aes_mul_gf2p2__656__Vfuncout = __Vfunc_aes_mul_gf2p2__656__f;
    __Vfunc_aes_mul_gf2p4__654__b = __Vfunc_aes_mul_gf2p2__656__Vfuncout;
    __Vfunc_aes_mul_gf2p2__657__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__654__delta));
    __Vfunc_aes_mul_gf2p2__657__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__654__gamma));
    __Vfunc_aes_mul_gf2p2__657__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__657__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__657__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__657__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__657__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__657__d)));
    __Vfunc_aes_mul_gf2p2__657__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__657__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__657__d)));
    __Vfunc_aes_mul_gf2p2__657__f = ((((IData)(__Vfunc_aes_mul_gf2p2__657__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__657__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__657__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__657__b)));
    __Vfunc_aes_mul_gf2p2__657__Vfuncout = __Vfunc_aes_mul_gf2p2__657__f;
    __Vfunc_aes_mul_gf2p4__654__c = __Vfunc_aes_mul_gf2p2__657__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__658__g = __Vfunc_aes_mul_gf2p4__654__b;
    __Vfunc_aes_scale_omega2_gf2p2__658__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__658__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__658__g)));
    __Vfunc_aes_scale_omega2_gf2p2__658__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__658__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__654__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__654__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__654__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__658__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__659__g = __Vfunc_aes_mul_gf2p4__654__b;
    __Vfunc_aes_scale_omega2_gf2p2__659__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__659__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__659__g)));
    __Vfunc_aes_scale_omega2_gf2p2__659__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__659__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__654__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__654__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__654__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__659__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__654__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__654__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__654__Vfuncout;
    __Vfunc_aes_mul_gf2p4__612__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__612__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__613__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__612__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__613__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__612__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__613__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__613__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__613__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__613__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__613__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__613__d)));
    __Vfunc_aes_mul_gf2p2__613__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__613__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__613__d)));
    __Vfunc_aes_mul_gf2p2__613__f = ((((IData)(__Vfunc_aes_mul_gf2p2__613__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__613__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__613__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__613__b)));
    __Vfunc_aes_mul_gf2p2__613__Vfuncout = __Vfunc_aes_mul_gf2p2__613__f;
    __Vfunc_aes_mul_gf2p4__612__a = __Vfunc_aes_mul_gf2p2__613__Vfuncout;
    __Vfunc_aes_mul_gf2p2__614__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__612__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__612__delta)));
    __Vfunc_aes_mul_gf2p2__614__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__612__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__612__gamma)));
    __Vfunc_aes_mul_gf2p2__614__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__614__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__614__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__614__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__614__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__614__d)));
    __Vfunc_aes_mul_gf2p2__614__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__614__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__614__d)));
    __Vfunc_aes_mul_gf2p2__614__f = ((((IData)(__Vfunc_aes_mul_gf2p2__614__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__614__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__614__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__614__b)));
    __Vfunc_aes_mul_gf2p2__614__Vfuncout = __Vfunc_aes_mul_gf2p2__614__f;
    __Vfunc_aes_mul_gf2p4__612__b = __Vfunc_aes_mul_gf2p2__614__Vfuncout;
    __Vfunc_aes_mul_gf2p2__615__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__612__delta));
    __Vfunc_aes_mul_gf2p2__615__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__612__gamma));
    __Vfunc_aes_mul_gf2p2__615__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__615__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__615__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__615__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__615__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__615__d)));
    __Vfunc_aes_mul_gf2p2__615__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__615__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__615__d)));
    __Vfunc_aes_mul_gf2p2__615__f = ((((IData)(__Vfunc_aes_mul_gf2p2__615__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__615__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__615__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__615__b)));
    __Vfunc_aes_mul_gf2p2__615__Vfuncout = __Vfunc_aes_mul_gf2p2__615__f;
    __Vfunc_aes_mul_gf2p4__612__c = __Vfunc_aes_mul_gf2p2__615__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__616__g = __Vfunc_aes_mul_gf2p4__612__b;
    __Vfunc_aes_scale_omega2_gf2p2__616__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__616__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__616__g)));
    __Vfunc_aes_scale_omega2_gf2p2__616__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__616__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__612__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__612__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__612__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__616__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__617__g = __Vfunc_aes_mul_gf2p4__612__b;
    __Vfunc_aes_scale_omega2_gf2p2__617__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__617__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__617__g)));
    __Vfunc_aes_scale_omega2_gf2p2__617__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__617__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__612__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__612__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__612__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__617__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__612__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__612__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__612__Vfuncout;
    __Vfunc_aes_mul_gf2p4__630__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__630__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__631__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__630__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__631__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__630__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__631__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__631__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__631__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__631__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__631__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__631__d)));
    __Vfunc_aes_mul_gf2p2__631__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__631__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__631__d)));
    __Vfunc_aes_mul_gf2p2__631__f = ((((IData)(__Vfunc_aes_mul_gf2p2__631__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__631__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__631__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__631__b)));
    __Vfunc_aes_mul_gf2p2__631__Vfuncout = __Vfunc_aes_mul_gf2p2__631__f;
    __Vfunc_aes_mul_gf2p4__630__a = __Vfunc_aes_mul_gf2p2__631__Vfuncout;
    __Vfunc_aes_mul_gf2p2__632__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__630__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__630__delta)));
    __Vfunc_aes_mul_gf2p2__632__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__630__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__630__gamma)));
    __Vfunc_aes_mul_gf2p2__632__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__632__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__632__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__632__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__632__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__632__d)));
    __Vfunc_aes_mul_gf2p2__632__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__632__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__632__d)));
    __Vfunc_aes_mul_gf2p2__632__f = ((((IData)(__Vfunc_aes_mul_gf2p2__632__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__632__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__632__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__632__b)));
    __Vfunc_aes_mul_gf2p2__632__Vfuncout = __Vfunc_aes_mul_gf2p2__632__f;
    __Vfunc_aes_mul_gf2p4__630__b = __Vfunc_aes_mul_gf2p2__632__Vfuncout;
    __Vfunc_aes_mul_gf2p2__633__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__630__delta));
    __Vfunc_aes_mul_gf2p2__633__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__630__gamma));
    __Vfunc_aes_mul_gf2p2__633__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__633__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__633__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__633__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__633__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__633__d)));
    __Vfunc_aes_mul_gf2p2__633__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__633__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__633__d)));
    __Vfunc_aes_mul_gf2p2__633__f = ((((IData)(__Vfunc_aes_mul_gf2p2__633__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__633__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__633__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__633__b)));
    __Vfunc_aes_mul_gf2p2__633__Vfuncout = __Vfunc_aes_mul_gf2p2__633__f;
    __Vfunc_aes_mul_gf2p4__630__c = __Vfunc_aes_mul_gf2p2__633__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__634__g = __Vfunc_aes_mul_gf2p4__630__b;
    __Vfunc_aes_scale_omega2_gf2p2__634__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__634__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__634__g)));
    __Vfunc_aes_scale_omega2_gf2p2__634__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__634__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__630__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__630__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__630__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__634__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__635__g = __Vfunc_aes_mul_gf2p4__630__b;
    __Vfunc_aes_scale_omega2_gf2p2__635__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__635__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__635__g)));
    __Vfunc_aes_scale_omega2_gf2p2__635__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__635__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__630__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__630__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__630__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__635__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__630__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__630__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__630__Vfuncout;
    __Vfunc_aes_mul_gf2p4__636__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__636__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__637__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__636__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__637__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__636__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__637__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__637__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__637__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__637__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__637__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__637__d)));
    __Vfunc_aes_mul_gf2p2__637__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__637__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__637__d)));
    __Vfunc_aes_mul_gf2p2__637__f = ((((IData)(__Vfunc_aes_mul_gf2p2__637__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__637__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__637__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__637__b)));
    __Vfunc_aes_mul_gf2p2__637__Vfuncout = __Vfunc_aes_mul_gf2p2__637__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__a = __Vfunc_aes_mul_gf2p2__637__Vfuncout;
    __Vfunc_aes_mul_gf2p2__638__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__636__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__636__delta)));
    __Vfunc_aes_mul_gf2p2__638__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__636__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__636__gamma)));
    __Vfunc_aes_mul_gf2p2__638__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__638__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__638__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__638__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__638__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__638__d)));
    __Vfunc_aes_mul_gf2p2__638__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__638__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__638__d)));
    __Vfunc_aes_mul_gf2p2__638__f = ((((IData)(__Vfunc_aes_mul_gf2p2__638__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__638__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__638__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__638__b)));
    __Vfunc_aes_mul_gf2p2__638__Vfuncout = __Vfunc_aes_mul_gf2p2__638__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__b = __Vfunc_aes_mul_gf2p2__638__Vfuncout;
    __Vfunc_aes_mul_gf2p2__639__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__636__delta));
    __Vfunc_aes_mul_gf2p2__639__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__636__gamma));
    __Vfunc_aes_mul_gf2p2__639__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__639__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__639__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__639__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__639__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__639__d)));
    __Vfunc_aes_mul_gf2p2__639__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__639__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__639__d)));
    __Vfunc_aes_mul_gf2p2__639__f = ((((IData)(__Vfunc_aes_mul_gf2p2__639__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__639__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__639__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__639__b)));
    __Vfunc_aes_mul_gf2p2__639__Vfuncout = __Vfunc_aes_mul_gf2p2__639__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__c = __Vfunc_aes_mul_gf2p2__639__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__640__g = vlSelf->__Vfunc_aes_mul_gf2p4__636__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__640__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__640__g)));
    __Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__641__g = vlSelf->__Vfunc_aes_mul_gf2p4__636__b;
    __Vfunc_aes_scale_omega2_gf2p2__641__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__641__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__641__g)));
    __Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__641__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__636__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__636__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__636__Vfuncout;
    __Vfunc_aes_mul_gf2p4__648__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__648__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__649__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__648__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__649__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__648__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__649__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__649__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__649__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__649__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__649__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__649__d)));
    __Vfunc_aes_mul_gf2p2__649__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__649__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__649__d)));
    __Vfunc_aes_mul_gf2p2__649__f = ((((IData)(__Vfunc_aes_mul_gf2p2__649__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__649__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__649__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__649__b)));
    __Vfunc_aes_mul_gf2p2__649__Vfuncout = __Vfunc_aes_mul_gf2p2__649__f;
    __Vfunc_aes_mul_gf2p4__648__a = __Vfunc_aes_mul_gf2p2__649__Vfuncout;
    __Vfunc_aes_mul_gf2p2__650__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__648__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__648__delta)));
    __Vfunc_aes_mul_gf2p2__650__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__648__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__648__gamma)));
    __Vfunc_aes_mul_gf2p2__650__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__650__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__650__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__650__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__650__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__650__d)));
    __Vfunc_aes_mul_gf2p2__650__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__650__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__650__d)));
    __Vfunc_aes_mul_gf2p2__650__f = ((((IData)(__Vfunc_aes_mul_gf2p2__650__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__650__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__650__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__650__b)));
    __Vfunc_aes_mul_gf2p2__650__Vfuncout = __Vfunc_aes_mul_gf2p2__650__f;
    __Vfunc_aes_mul_gf2p4__648__b = __Vfunc_aes_mul_gf2p2__650__Vfuncout;
    __Vfunc_aes_mul_gf2p2__651__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__648__delta));
    __Vfunc_aes_mul_gf2p2__651__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__648__gamma));
    __Vfunc_aes_mul_gf2p2__651__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__651__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__651__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__651__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__651__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__651__d)));
    __Vfunc_aes_mul_gf2p2__651__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__651__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__651__d)));
    __Vfunc_aes_mul_gf2p2__651__f = ((((IData)(__Vfunc_aes_mul_gf2p2__651__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__651__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__651__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__651__b)));
    __Vfunc_aes_mul_gf2p2__651__Vfuncout = __Vfunc_aes_mul_gf2p2__651__f;
    __Vfunc_aes_mul_gf2p4__648__c = __Vfunc_aes_mul_gf2p2__651__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__652__g = __Vfunc_aes_mul_gf2p4__648__b;
    __Vfunc_aes_scale_omega2_gf2p2__652__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__652__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__652__g)));
    __Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__652__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__648__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__648__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__653__g = __Vfunc_aes_mul_gf2p4__648__b;
    __Vfunc_aes_scale_omega2_gf2p2__653__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__653__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__653__g)));
    __Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__653__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__648__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__648__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__648__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__648__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__648__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__598__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__598__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__598__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__598__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__598__Vfuncout = __Vfunc_aes_square_gf2p2__598__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__598__Vfuncout;
    __Vfunc_aes_square_gf2p2__599__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__599__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__599__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__599__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__599__Vfuncout = __Vfunc_aes_square_gf2p2__599__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__599__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__74(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__74\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__722__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__722__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__722__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__722__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__722__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__722__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__723__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__723__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__723__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__723__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__724__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__724__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__724__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__724__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__725__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__725__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__725__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__725__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__726__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__726__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__726__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__727__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__727__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__727__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__740__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__740__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__740__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__740__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__740__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__740__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__741__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__741__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__741__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__741__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__742__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__742__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__742__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__742__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__743__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__743__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__743__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__743__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__744__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__744__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__744__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__745__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__745__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__745__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__747__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__747__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__747__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__747__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__748__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__748__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__748__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__748__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__749__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__749__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__749__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__749__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__750__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__751__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__751__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__752__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__756__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__756__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__757__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__757__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__762__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__762__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__763__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__763__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__764__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__764__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__764__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__764__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__764__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__764__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__765__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__765__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__765__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__765__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__766__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__766__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__766__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__766__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__767__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__767__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__767__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__767__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__768__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__768__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__768__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__769__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__769__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__769__d;
    // Body
    __Vfunc_aes_mul_gf2p2__755__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__755__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__755__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__755__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__755__b)));
    __Vfunc_aes_mul_gf2p2__755__Vfuncout = __Vfunc_aes_mul_gf2p2__755__f;
    __Vfunc_aes_mul_gf2p4__752__c = __Vfunc_aes_mul_gf2p2__755__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__756__g = vlSelf->__Vfunc_aes_mul_gf2p4__752__b;
    __Vfunc_aes_scale_omega2_gf2p2__756__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__756__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__756__g)));
    __Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__756__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__752__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__752__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__757__g = vlSelf->__Vfunc_aes_mul_gf2p4__752__b;
    __Vfunc_aes_scale_omega2_gf2p2__757__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__757__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__757__g)));
    __Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__757__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__752__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__752__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__752__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__752__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__752__Vfuncout;
    __Vfunc_aes_mul_gf2p4__764__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__764__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__765__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__764__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__765__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__764__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__765__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__765__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__765__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__765__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__765__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__765__d)));
    __Vfunc_aes_mul_gf2p2__765__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__765__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__765__d)));
    __Vfunc_aes_mul_gf2p2__765__f = ((((IData)(__Vfunc_aes_mul_gf2p2__765__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__765__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__765__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__765__b)));
    __Vfunc_aes_mul_gf2p2__765__Vfuncout = __Vfunc_aes_mul_gf2p2__765__f;
    __Vfunc_aes_mul_gf2p4__764__a = __Vfunc_aes_mul_gf2p2__765__Vfuncout;
    __Vfunc_aes_mul_gf2p2__766__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__764__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__764__delta)));
    __Vfunc_aes_mul_gf2p2__766__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__764__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__764__gamma)));
    __Vfunc_aes_mul_gf2p2__766__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__766__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__766__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__766__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__766__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__766__d)));
    __Vfunc_aes_mul_gf2p2__766__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__766__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__766__d)));
    __Vfunc_aes_mul_gf2p2__766__f = ((((IData)(__Vfunc_aes_mul_gf2p2__766__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__766__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__766__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__766__b)));
    __Vfunc_aes_mul_gf2p2__766__Vfuncout = __Vfunc_aes_mul_gf2p2__766__f;
    __Vfunc_aes_mul_gf2p4__764__b = __Vfunc_aes_mul_gf2p2__766__Vfuncout;
    __Vfunc_aes_mul_gf2p2__767__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__764__delta));
    __Vfunc_aes_mul_gf2p2__767__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__764__gamma));
    __Vfunc_aes_mul_gf2p2__767__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__767__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__767__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__767__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__767__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__767__d)));
    __Vfunc_aes_mul_gf2p2__767__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__767__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__767__d)));
    __Vfunc_aes_mul_gf2p2__767__f = ((((IData)(__Vfunc_aes_mul_gf2p2__767__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__767__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__767__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__767__b)));
    __Vfunc_aes_mul_gf2p2__767__Vfuncout = __Vfunc_aes_mul_gf2p2__767__f;
    __Vfunc_aes_mul_gf2p4__764__c = __Vfunc_aes_mul_gf2p2__767__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__768__g = __Vfunc_aes_mul_gf2p4__764__b;
    __Vfunc_aes_scale_omega2_gf2p2__768__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__768__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__768__g)));
    __Vfunc_aes_scale_omega2_gf2p2__768__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__768__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__764__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__764__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__764__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__768__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__769__g = __Vfunc_aes_mul_gf2p4__764__b;
    __Vfunc_aes_scale_omega2_gf2p2__769__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__769__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__769__g)));
    __Vfunc_aes_scale_omega2_gf2p2__769__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__769__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__764__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__764__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__764__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__769__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__764__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__764__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__764__Vfuncout;
    __Vfunc_aes_mul_gf2p4__722__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__722__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__723__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__722__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__723__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__722__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__723__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__723__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__723__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__723__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__723__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__723__d)));
    __Vfunc_aes_mul_gf2p2__723__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__723__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__723__d)));
    __Vfunc_aes_mul_gf2p2__723__f = ((((IData)(__Vfunc_aes_mul_gf2p2__723__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__723__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__723__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__723__b)));
    __Vfunc_aes_mul_gf2p2__723__Vfuncout = __Vfunc_aes_mul_gf2p2__723__f;
    __Vfunc_aes_mul_gf2p4__722__a = __Vfunc_aes_mul_gf2p2__723__Vfuncout;
    __Vfunc_aes_mul_gf2p2__724__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__722__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__722__delta)));
    __Vfunc_aes_mul_gf2p2__724__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__722__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__722__gamma)));
    __Vfunc_aes_mul_gf2p2__724__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__724__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__724__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__724__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__724__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__724__d)));
    __Vfunc_aes_mul_gf2p2__724__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__724__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__724__d)));
    __Vfunc_aes_mul_gf2p2__724__f = ((((IData)(__Vfunc_aes_mul_gf2p2__724__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__724__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__724__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__724__b)));
    __Vfunc_aes_mul_gf2p2__724__Vfuncout = __Vfunc_aes_mul_gf2p2__724__f;
    __Vfunc_aes_mul_gf2p4__722__b = __Vfunc_aes_mul_gf2p2__724__Vfuncout;
    __Vfunc_aes_mul_gf2p2__725__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__722__delta));
    __Vfunc_aes_mul_gf2p2__725__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__722__gamma));
    __Vfunc_aes_mul_gf2p2__725__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__725__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__725__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__725__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__725__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__725__d)));
    __Vfunc_aes_mul_gf2p2__725__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__725__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__725__d)));
    __Vfunc_aes_mul_gf2p2__725__f = ((((IData)(__Vfunc_aes_mul_gf2p2__725__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__725__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__725__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__725__b)));
    __Vfunc_aes_mul_gf2p2__725__Vfuncout = __Vfunc_aes_mul_gf2p2__725__f;
    __Vfunc_aes_mul_gf2p4__722__c = __Vfunc_aes_mul_gf2p2__725__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__726__g = __Vfunc_aes_mul_gf2p4__722__b;
    __Vfunc_aes_scale_omega2_gf2p2__726__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__726__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__726__g)));
    __Vfunc_aes_scale_omega2_gf2p2__726__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__726__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__722__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__722__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__722__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__726__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__727__g = __Vfunc_aes_mul_gf2p4__722__b;
    __Vfunc_aes_scale_omega2_gf2p2__727__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__727__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__727__g)));
    __Vfunc_aes_scale_omega2_gf2p2__727__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__727__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__722__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__722__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__722__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__727__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__722__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__722__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__722__Vfuncout;
    __Vfunc_aes_mul_gf2p4__740__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__740__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__741__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__740__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__741__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__740__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__741__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__741__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__741__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__741__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__741__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__741__d)));
    __Vfunc_aes_mul_gf2p2__741__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__741__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__741__d)));
    __Vfunc_aes_mul_gf2p2__741__f = ((((IData)(__Vfunc_aes_mul_gf2p2__741__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__741__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__741__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__741__b)));
    __Vfunc_aes_mul_gf2p2__741__Vfuncout = __Vfunc_aes_mul_gf2p2__741__f;
    __Vfunc_aes_mul_gf2p4__740__a = __Vfunc_aes_mul_gf2p2__741__Vfuncout;
    __Vfunc_aes_mul_gf2p2__742__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__740__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__740__delta)));
    __Vfunc_aes_mul_gf2p2__742__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__740__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__740__gamma)));
    __Vfunc_aes_mul_gf2p2__742__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__742__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__742__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__742__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__742__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__742__d)));
    __Vfunc_aes_mul_gf2p2__742__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__742__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__742__d)));
    __Vfunc_aes_mul_gf2p2__742__f = ((((IData)(__Vfunc_aes_mul_gf2p2__742__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__742__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__742__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__742__b)));
    __Vfunc_aes_mul_gf2p2__742__Vfuncout = __Vfunc_aes_mul_gf2p2__742__f;
    __Vfunc_aes_mul_gf2p4__740__b = __Vfunc_aes_mul_gf2p2__742__Vfuncout;
    __Vfunc_aes_mul_gf2p2__743__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__740__delta));
    __Vfunc_aes_mul_gf2p2__743__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__740__gamma));
    __Vfunc_aes_mul_gf2p2__743__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__743__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__743__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__743__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__743__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__743__d)));
    __Vfunc_aes_mul_gf2p2__743__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__743__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__743__d)));
    __Vfunc_aes_mul_gf2p2__743__f = ((((IData)(__Vfunc_aes_mul_gf2p2__743__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__743__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__743__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__743__b)));
    __Vfunc_aes_mul_gf2p2__743__Vfuncout = __Vfunc_aes_mul_gf2p2__743__f;
    __Vfunc_aes_mul_gf2p4__740__c = __Vfunc_aes_mul_gf2p2__743__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__744__g = __Vfunc_aes_mul_gf2p4__740__b;
    __Vfunc_aes_scale_omega2_gf2p2__744__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__744__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__744__g)));
    __Vfunc_aes_scale_omega2_gf2p2__744__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__744__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__740__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__740__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__740__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__744__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__745__g = __Vfunc_aes_mul_gf2p4__740__b;
    __Vfunc_aes_scale_omega2_gf2p2__745__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__745__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__745__g)));
    __Vfunc_aes_scale_omega2_gf2p2__745__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__745__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__740__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__740__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__740__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__745__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__740__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__740__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__740__Vfuncout;
    __Vfunc_aes_mul_gf2p4__746__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__746__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__747__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__746__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__747__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__746__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__747__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__747__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__747__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__747__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__747__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__747__d)));
    __Vfunc_aes_mul_gf2p2__747__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__747__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__747__d)));
    __Vfunc_aes_mul_gf2p2__747__f = ((((IData)(__Vfunc_aes_mul_gf2p2__747__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__747__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__747__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__747__b)));
    __Vfunc_aes_mul_gf2p2__747__Vfuncout = __Vfunc_aes_mul_gf2p2__747__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__a = __Vfunc_aes_mul_gf2p2__747__Vfuncout;
    __Vfunc_aes_mul_gf2p2__748__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__746__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__746__delta)));
    __Vfunc_aes_mul_gf2p2__748__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__746__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__746__gamma)));
    __Vfunc_aes_mul_gf2p2__748__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__748__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__748__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__748__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__748__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__748__d)));
    __Vfunc_aes_mul_gf2p2__748__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__748__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__748__d)));
    __Vfunc_aes_mul_gf2p2__748__f = ((((IData)(__Vfunc_aes_mul_gf2p2__748__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__748__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__748__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__748__b)));
    __Vfunc_aes_mul_gf2p2__748__Vfuncout = __Vfunc_aes_mul_gf2p2__748__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__b = __Vfunc_aes_mul_gf2p2__748__Vfuncout;
    __Vfunc_aes_mul_gf2p2__749__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__746__delta));
    __Vfunc_aes_mul_gf2p2__749__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__746__gamma));
    __Vfunc_aes_mul_gf2p2__749__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__749__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__749__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__749__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__749__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__749__d)));
    __Vfunc_aes_mul_gf2p2__749__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__749__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__749__d)));
    __Vfunc_aes_mul_gf2p2__749__f = ((((IData)(__Vfunc_aes_mul_gf2p2__749__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__749__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__749__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__749__b)));
    __Vfunc_aes_mul_gf2p2__749__Vfuncout = __Vfunc_aes_mul_gf2p2__749__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__c = __Vfunc_aes_mul_gf2p2__749__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__750__g = vlSelf->__Vfunc_aes_mul_gf2p4__746__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__750__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__750__g)));
    __Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__751__g = vlSelf->__Vfunc_aes_mul_gf2p4__746__b;
    __Vfunc_aes_scale_omega2_gf2p2__751__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__751__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__751__g)));
    __Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__751__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__746__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__746__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__746__Vfuncout;
    __Vfunc_aes_mul_gf2p4__758__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__758__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__759__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__758__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__759__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__758__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__759__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__759__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__759__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__759__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__759__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__759__d)));
    __Vfunc_aes_mul_gf2p2__759__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__759__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__759__d)));
    __Vfunc_aes_mul_gf2p2__759__f = ((((IData)(__Vfunc_aes_mul_gf2p2__759__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__759__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__759__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__759__b)));
    __Vfunc_aes_mul_gf2p2__759__Vfuncout = __Vfunc_aes_mul_gf2p2__759__f;
    __Vfunc_aes_mul_gf2p4__758__a = __Vfunc_aes_mul_gf2p2__759__Vfuncout;
    __Vfunc_aes_mul_gf2p2__760__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__758__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__758__delta)));
    __Vfunc_aes_mul_gf2p2__760__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__758__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__758__gamma)));
    __Vfunc_aes_mul_gf2p2__760__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__760__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__760__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__760__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__760__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__760__d)));
    __Vfunc_aes_mul_gf2p2__760__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__760__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__760__d)));
    __Vfunc_aes_mul_gf2p2__760__f = ((((IData)(__Vfunc_aes_mul_gf2p2__760__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__760__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__760__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__760__b)));
    __Vfunc_aes_mul_gf2p2__760__Vfuncout = __Vfunc_aes_mul_gf2p2__760__f;
    __Vfunc_aes_mul_gf2p4__758__b = __Vfunc_aes_mul_gf2p2__760__Vfuncout;
    __Vfunc_aes_mul_gf2p2__761__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__758__delta));
    __Vfunc_aes_mul_gf2p2__761__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__758__gamma));
    __Vfunc_aes_mul_gf2p2__761__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__761__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__761__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__761__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__761__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__761__d)));
    __Vfunc_aes_mul_gf2p2__761__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__761__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__761__d)));
    __Vfunc_aes_mul_gf2p2__761__f = ((((IData)(__Vfunc_aes_mul_gf2p2__761__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__761__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__761__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__761__b)));
    __Vfunc_aes_mul_gf2p2__761__Vfuncout = __Vfunc_aes_mul_gf2p2__761__f;
    __Vfunc_aes_mul_gf2p4__758__c = __Vfunc_aes_mul_gf2p2__761__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__762__g = __Vfunc_aes_mul_gf2p4__758__b;
    __Vfunc_aes_scale_omega2_gf2p2__762__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__762__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__762__g)));
    __Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__762__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__758__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__758__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__763__g = __Vfunc_aes_mul_gf2p4__758__b;
    __Vfunc_aes_scale_omega2_gf2p2__763__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__763__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__763__g)));
    __Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__763__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__758__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__758__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__758__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__758__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__758__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__708__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__708__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__708__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__708__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__708__Vfuncout = __Vfunc_aes_square_gf2p2__708__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__708__Vfuncout;
    __Vfunc_aes_square_gf2p2__709__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__709__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__709__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__709__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__709__Vfuncout = __Vfunc_aes_square_gf2p2__709__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__709__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__76(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__76\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__818__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__818__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__818__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__819__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__819__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__819__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__832__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__832__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__832__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__832__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__832__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__832__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__833__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__833__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__833__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__834__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__834__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__834__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__835__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__835__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__835__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__836__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__836__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__836__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__837__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__837__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__837__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__850__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__850__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__850__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__850__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__850__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__850__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__851__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__851__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__851__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__852__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__852__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__852__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__853__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__853__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__853__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__854__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__854__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__854__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__855__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__855__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__855__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__857__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__857__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__857__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__858__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__858__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__858__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__859__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__859__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__859__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__860__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__861__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__861__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__862__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__862__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__866__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__866__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__866__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__867__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__867__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__867__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__872__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__872__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__873__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__873__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__874__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__874__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__874__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__874__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__874__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__874__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__875__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__875__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__875__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__876__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__876__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__876__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__877__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__877__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__877__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__878__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__878__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__878__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__879__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__879__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__879__d;
    // Body
    __Vfunc_aes_mul_gf2p2__865__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__865__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__865__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__865__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__865__b)));
    __Vfunc_aes_mul_gf2p2__865__Vfuncout = __Vfunc_aes_mul_gf2p2__865__f;
    __Vfunc_aes_mul_gf2p4__862__c = __Vfunc_aes_mul_gf2p2__865__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__866__g = vlSelf->__Vfunc_aes_mul_gf2p4__862__b;
    __Vfunc_aes_scale_omega2_gf2p2__866__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__866__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__866__g)));
    __Vfunc_aes_scale_omega2_gf2p2__866__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__866__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__862__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__862__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__862__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__866__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__867__g = vlSelf->__Vfunc_aes_mul_gf2p4__862__b;
    __Vfunc_aes_scale_omega2_gf2p2__867__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__867__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__867__g)));
    __Vfunc_aes_scale_omega2_gf2p2__867__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__867__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__862__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__862__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__862__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__867__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__862__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__862__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__862__Vfuncout;
    __Vfunc_aes_mul_gf2p4__874__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__874__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__875__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__874__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__875__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__874__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__875__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__875__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__875__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__875__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__875__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__875__d)));
    __Vfunc_aes_mul_gf2p2__875__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__875__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__875__d)));
    __Vfunc_aes_mul_gf2p2__875__f = ((((IData)(__Vfunc_aes_mul_gf2p2__875__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__875__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__875__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__875__b)));
    __Vfunc_aes_mul_gf2p2__875__Vfuncout = __Vfunc_aes_mul_gf2p2__875__f;
    __Vfunc_aes_mul_gf2p4__874__a = __Vfunc_aes_mul_gf2p2__875__Vfuncout;
    __Vfunc_aes_mul_gf2p2__876__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__874__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__874__delta)));
    __Vfunc_aes_mul_gf2p2__876__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__874__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__874__gamma)));
    __Vfunc_aes_mul_gf2p2__876__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__876__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__876__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__876__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__876__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__876__d)));
    __Vfunc_aes_mul_gf2p2__876__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__876__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__876__d)));
    __Vfunc_aes_mul_gf2p2__876__f = ((((IData)(__Vfunc_aes_mul_gf2p2__876__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__876__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__876__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__876__b)));
    __Vfunc_aes_mul_gf2p2__876__Vfuncout = __Vfunc_aes_mul_gf2p2__876__f;
    __Vfunc_aes_mul_gf2p4__874__b = __Vfunc_aes_mul_gf2p2__876__Vfuncout;
    __Vfunc_aes_mul_gf2p2__877__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__874__delta));
    __Vfunc_aes_mul_gf2p2__877__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__874__gamma));
    __Vfunc_aes_mul_gf2p2__877__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__877__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__877__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__877__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__877__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__877__d)));
    __Vfunc_aes_mul_gf2p2__877__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__877__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__877__d)));
    __Vfunc_aes_mul_gf2p2__877__f = ((((IData)(__Vfunc_aes_mul_gf2p2__877__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__877__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__877__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__877__b)));
    __Vfunc_aes_mul_gf2p2__877__Vfuncout = __Vfunc_aes_mul_gf2p2__877__f;
    __Vfunc_aes_mul_gf2p4__874__c = __Vfunc_aes_mul_gf2p2__877__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__878__g = __Vfunc_aes_mul_gf2p4__874__b;
    __Vfunc_aes_scale_omega2_gf2p2__878__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__878__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__878__g)));
    __Vfunc_aes_scale_omega2_gf2p2__878__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__878__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__874__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__874__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__874__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__878__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__879__g = __Vfunc_aes_mul_gf2p4__874__b;
    __Vfunc_aes_scale_omega2_gf2p2__879__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__879__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__879__g)));
    __Vfunc_aes_scale_omega2_gf2p2__879__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__879__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__874__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__874__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__874__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__879__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__874__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__874__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__874__Vfuncout;
    __Vfunc_aes_mul_gf2p4__832__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__832__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__833__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__832__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__833__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__832__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__833__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__833__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__833__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__833__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__833__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__833__d)));
    __Vfunc_aes_mul_gf2p2__833__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__833__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__833__d)));
    __Vfunc_aes_mul_gf2p2__833__f = ((((IData)(__Vfunc_aes_mul_gf2p2__833__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__833__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__833__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__833__b)));
    __Vfunc_aes_mul_gf2p2__833__Vfuncout = __Vfunc_aes_mul_gf2p2__833__f;
    __Vfunc_aes_mul_gf2p4__832__a = __Vfunc_aes_mul_gf2p2__833__Vfuncout;
    __Vfunc_aes_mul_gf2p2__834__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__832__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__832__delta)));
    __Vfunc_aes_mul_gf2p2__834__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__832__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__832__gamma)));
    __Vfunc_aes_mul_gf2p2__834__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__834__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__834__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__834__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__834__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__834__d)));
    __Vfunc_aes_mul_gf2p2__834__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__834__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__834__d)));
    __Vfunc_aes_mul_gf2p2__834__f = ((((IData)(__Vfunc_aes_mul_gf2p2__834__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__834__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__834__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__834__b)));
    __Vfunc_aes_mul_gf2p2__834__Vfuncout = __Vfunc_aes_mul_gf2p2__834__f;
    __Vfunc_aes_mul_gf2p4__832__b = __Vfunc_aes_mul_gf2p2__834__Vfuncout;
    __Vfunc_aes_mul_gf2p2__835__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__832__delta));
    __Vfunc_aes_mul_gf2p2__835__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__832__gamma));
    __Vfunc_aes_mul_gf2p2__835__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__835__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__835__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__835__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__835__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__835__d)));
    __Vfunc_aes_mul_gf2p2__835__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__835__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__835__d)));
    __Vfunc_aes_mul_gf2p2__835__f = ((((IData)(__Vfunc_aes_mul_gf2p2__835__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__835__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__835__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__835__b)));
    __Vfunc_aes_mul_gf2p2__835__Vfuncout = __Vfunc_aes_mul_gf2p2__835__f;
    __Vfunc_aes_mul_gf2p4__832__c = __Vfunc_aes_mul_gf2p2__835__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__836__g = __Vfunc_aes_mul_gf2p4__832__b;
    __Vfunc_aes_scale_omega2_gf2p2__836__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__836__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__836__g)));
    __Vfunc_aes_scale_omega2_gf2p2__836__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__836__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__832__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__832__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__832__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__836__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__837__g = __Vfunc_aes_mul_gf2p4__832__b;
    __Vfunc_aes_scale_omega2_gf2p2__837__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__837__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__837__g)));
    __Vfunc_aes_scale_omega2_gf2p2__837__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__837__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__832__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__832__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__832__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__837__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__832__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__832__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__832__Vfuncout;
    __Vfunc_aes_mul_gf2p4__850__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__850__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__851__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__850__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__851__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__850__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__851__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__851__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__851__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__851__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__851__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__851__d)));
    __Vfunc_aes_mul_gf2p2__851__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__851__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__851__d)));
    __Vfunc_aes_mul_gf2p2__851__f = ((((IData)(__Vfunc_aes_mul_gf2p2__851__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__851__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__851__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__851__b)));
    __Vfunc_aes_mul_gf2p2__851__Vfuncout = __Vfunc_aes_mul_gf2p2__851__f;
    __Vfunc_aes_mul_gf2p4__850__a = __Vfunc_aes_mul_gf2p2__851__Vfuncout;
    __Vfunc_aes_mul_gf2p2__852__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__850__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__850__delta)));
    __Vfunc_aes_mul_gf2p2__852__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__850__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__850__gamma)));
    __Vfunc_aes_mul_gf2p2__852__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__852__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__852__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__852__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__852__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__852__d)));
    __Vfunc_aes_mul_gf2p2__852__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__852__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__852__d)));
    __Vfunc_aes_mul_gf2p2__852__f = ((((IData)(__Vfunc_aes_mul_gf2p2__852__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__852__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__852__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__852__b)));
    __Vfunc_aes_mul_gf2p2__852__Vfuncout = __Vfunc_aes_mul_gf2p2__852__f;
    __Vfunc_aes_mul_gf2p4__850__b = __Vfunc_aes_mul_gf2p2__852__Vfuncout;
    __Vfunc_aes_mul_gf2p2__853__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__850__delta));
    __Vfunc_aes_mul_gf2p2__853__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__850__gamma));
    __Vfunc_aes_mul_gf2p2__853__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__853__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__853__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__853__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__853__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__853__d)));
    __Vfunc_aes_mul_gf2p2__853__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__853__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__853__d)));
    __Vfunc_aes_mul_gf2p2__853__f = ((((IData)(__Vfunc_aes_mul_gf2p2__853__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__853__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__853__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__853__b)));
    __Vfunc_aes_mul_gf2p2__853__Vfuncout = __Vfunc_aes_mul_gf2p2__853__f;
    __Vfunc_aes_mul_gf2p4__850__c = __Vfunc_aes_mul_gf2p2__853__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__854__g = __Vfunc_aes_mul_gf2p4__850__b;
    __Vfunc_aes_scale_omega2_gf2p2__854__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__854__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__854__g)));
    __Vfunc_aes_scale_omega2_gf2p2__854__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__854__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__850__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__850__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__850__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__854__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__855__g = __Vfunc_aes_mul_gf2p4__850__b;
    __Vfunc_aes_scale_omega2_gf2p2__855__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__855__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__855__g)));
    __Vfunc_aes_scale_omega2_gf2p2__855__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__855__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__850__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__850__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__850__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__855__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__850__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__850__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__850__Vfuncout;
    __Vfunc_aes_mul_gf2p4__856__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__856__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__857__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__856__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__857__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__856__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__857__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__857__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__857__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__857__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__857__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__857__d)));
    __Vfunc_aes_mul_gf2p2__857__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__857__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__857__d)));
    __Vfunc_aes_mul_gf2p2__857__f = ((((IData)(__Vfunc_aes_mul_gf2p2__857__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__857__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__857__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__857__b)));
    __Vfunc_aes_mul_gf2p2__857__Vfuncout = __Vfunc_aes_mul_gf2p2__857__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__a = __Vfunc_aes_mul_gf2p2__857__Vfuncout;
    __Vfunc_aes_mul_gf2p2__858__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__856__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__856__delta)));
    __Vfunc_aes_mul_gf2p2__858__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__856__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__856__gamma)));
    __Vfunc_aes_mul_gf2p2__858__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__858__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__858__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__858__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__858__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__858__d)));
    __Vfunc_aes_mul_gf2p2__858__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__858__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__858__d)));
    __Vfunc_aes_mul_gf2p2__858__f = ((((IData)(__Vfunc_aes_mul_gf2p2__858__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__858__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__858__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__858__b)));
    __Vfunc_aes_mul_gf2p2__858__Vfuncout = __Vfunc_aes_mul_gf2p2__858__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__b = __Vfunc_aes_mul_gf2p2__858__Vfuncout;
    __Vfunc_aes_mul_gf2p2__859__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__856__delta));
    __Vfunc_aes_mul_gf2p2__859__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__856__gamma));
    __Vfunc_aes_mul_gf2p2__859__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__859__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__859__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__859__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__859__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__859__d)));
    __Vfunc_aes_mul_gf2p2__859__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__859__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__859__d)));
    __Vfunc_aes_mul_gf2p2__859__f = ((((IData)(__Vfunc_aes_mul_gf2p2__859__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__859__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__859__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__859__b)));
    __Vfunc_aes_mul_gf2p2__859__Vfuncout = __Vfunc_aes_mul_gf2p2__859__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__c = __Vfunc_aes_mul_gf2p2__859__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__860__g = vlSelf->__Vfunc_aes_mul_gf2p4__856__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__860__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__860__g)));
    __Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__861__g = vlSelf->__Vfunc_aes_mul_gf2p4__856__b;
    __Vfunc_aes_scale_omega2_gf2p2__861__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__861__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__861__g)));
    __Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__861__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__856__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__856__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__856__Vfuncout;
    __Vfunc_aes_mul_gf2p4__868__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__868__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__869__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__868__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__869__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__868__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__869__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__869__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__869__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__869__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__869__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__869__d)));
    __Vfunc_aes_mul_gf2p2__869__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__869__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__869__d)));
    __Vfunc_aes_mul_gf2p2__869__f = ((((IData)(__Vfunc_aes_mul_gf2p2__869__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__869__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__869__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__869__b)));
    __Vfunc_aes_mul_gf2p2__869__Vfuncout = __Vfunc_aes_mul_gf2p2__869__f;
    __Vfunc_aes_mul_gf2p4__868__a = __Vfunc_aes_mul_gf2p2__869__Vfuncout;
    __Vfunc_aes_mul_gf2p2__870__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__868__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__868__delta)));
    __Vfunc_aes_mul_gf2p2__870__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__868__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__868__gamma)));
    __Vfunc_aes_mul_gf2p2__870__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__870__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__870__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__870__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__870__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__870__d)));
    __Vfunc_aes_mul_gf2p2__870__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__870__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__870__d)));
    __Vfunc_aes_mul_gf2p2__870__f = ((((IData)(__Vfunc_aes_mul_gf2p2__870__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__870__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__870__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__870__b)));
    __Vfunc_aes_mul_gf2p2__870__Vfuncout = __Vfunc_aes_mul_gf2p2__870__f;
    __Vfunc_aes_mul_gf2p4__868__b = __Vfunc_aes_mul_gf2p2__870__Vfuncout;
    __Vfunc_aes_mul_gf2p2__871__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__868__delta));
    __Vfunc_aes_mul_gf2p2__871__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__868__gamma));
    __Vfunc_aes_mul_gf2p2__871__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__871__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__871__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__871__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__871__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__871__d)));
    __Vfunc_aes_mul_gf2p2__871__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__871__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__871__d)));
    __Vfunc_aes_mul_gf2p2__871__f = ((((IData)(__Vfunc_aes_mul_gf2p2__871__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__871__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__871__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__871__b)));
    __Vfunc_aes_mul_gf2p2__871__Vfuncout = __Vfunc_aes_mul_gf2p2__871__f;
    __Vfunc_aes_mul_gf2p4__868__c = __Vfunc_aes_mul_gf2p2__871__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__872__g = __Vfunc_aes_mul_gf2p4__868__b;
    __Vfunc_aes_scale_omega2_gf2p2__872__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__872__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__872__g)));
    __Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__872__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__868__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__868__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__873__g = __Vfunc_aes_mul_gf2p4__868__b;
    __Vfunc_aes_scale_omega2_gf2p2__873__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__873__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__873__g)));
    __Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__873__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__868__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__868__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__868__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__868__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__868__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__818__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__818__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__818__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__818__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__818__Vfuncout = __Vfunc_aes_square_gf2p2__818__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__818__Vfuncout;
    __Vfunc_aes_square_gf2p2__819__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__819__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__819__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__819__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__819__Vfuncout = __Vfunc_aes_square_gf2p2__819__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__819__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__78(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__78\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__928__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__928__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__928__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__929__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__929__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__929__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__942__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__942__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__942__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__942__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__942__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__942__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__943__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__943__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__943__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__943__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__944__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__944__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__944__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__944__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__945__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__945__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__945__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__945__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__946__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__946__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__946__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__947__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__947__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__947__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__960__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__960__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__960__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__960__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__960__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__960__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__961__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__961__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__961__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__961__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__962__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__962__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__962__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__962__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__963__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__963__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__963__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__963__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__964__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__964__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__964__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__965__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__965__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__965__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__967__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__967__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__967__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__967__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__968__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__968__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__968__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__968__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__969__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__969__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__969__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__969__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__970__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__971__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__971__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__972__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__972__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__976__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__976__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__976__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__977__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__977__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__977__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__982__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__982__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__983__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__983__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__984__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__984__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__984__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__984__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__984__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__984__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__985__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__985__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__985__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__985__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__986__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__986__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__986__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__986__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__987__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__987__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__987__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__987__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__988__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__988__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__988__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__989__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__989__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__989__d;
    // Body
    __Vfunc_aes_mul_gf2p2__975__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__975__a) 
                                       ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__975__b)) 
                                      << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__975__c) 
                                                ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__975__b)));
    __Vfunc_aes_mul_gf2p2__975__Vfuncout = __Vfunc_aes_mul_gf2p2__975__f;
    __Vfunc_aes_mul_gf2p4__972__c = __Vfunc_aes_mul_gf2p2__975__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__976__g = vlSelf->__Vfunc_aes_mul_gf2p4__972__b;
    __Vfunc_aes_scale_omega2_gf2p2__976__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__976__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__976__g)));
    __Vfunc_aes_scale_omega2_gf2p2__976__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__976__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__972__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__972__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__972__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__976__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__977__g = vlSelf->__Vfunc_aes_mul_gf2p4__972__b;
    __Vfunc_aes_scale_omega2_gf2p2__977__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__977__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__977__g)));
    __Vfunc_aes_scale_omega2_gf2p2__977__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__977__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__972__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__972__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__972__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__977__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__972__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__972__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__972__Vfuncout;
    __Vfunc_aes_mul_gf2p4__984__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__984__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p2__985__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__984__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__985__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__984__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__985__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__985__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__985__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__985__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__985__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__985__d)));
    __Vfunc_aes_mul_gf2p2__985__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__985__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__985__d)));
    __Vfunc_aes_mul_gf2p2__985__f = ((((IData)(__Vfunc_aes_mul_gf2p2__985__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__985__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__985__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__985__b)));
    __Vfunc_aes_mul_gf2p2__985__Vfuncout = __Vfunc_aes_mul_gf2p2__985__f;
    __Vfunc_aes_mul_gf2p4__984__a = __Vfunc_aes_mul_gf2p2__985__Vfuncout;
    __Vfunc_aes_mul_gf2p2__986__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__984__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__984__delta)));
    __Vfunc_aes_mul_gf2p2__986__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__984__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__984__gamma)));
    __Vfunc_aes_mul_gf2p2__986__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__986__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__986__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__986__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__986__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__986__d)));
    __Vfunc_aes_mul_gf2p2__986__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__986__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__986__d)));
    __Vfunc_aes_mul_gf2p2__986__f = ((((IData)(__Vfunc_aes_mul_gf2p2__986__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__986__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__986__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__986__b)));
    __Vfunc_aes_mul_gf2p2__986__Vfuncout = __Vfunc_aes_mul_gf2p2__986__f;
    __Vfunc_aes_mul_gf2p4__984__b = __Vfunc_aes_mul_gf2p2__986__Vfuncout;
    __Vfunc_aes_mul_gf2p2__987__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__984__delta));
    __Vfunc_aes_mul_gf2p2__987__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__984__gamma));
    __Vfunc_aes_mul_gf2p2__987__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__987__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__987__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__987__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__987__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__987__d)));
    __Vfunc_aes_mul_gf2p2__987__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__987__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__987__d)));
    __Vfunc_aes_mul_gf2p2__987__f = ((((IData)(__Vfunc_aes_mul_gf2p2__987__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__987__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__987__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__987__b)));
    __Vfunc_aes_mul_gf2p2__987__Vfuncout = __Vfunc_aes_mul_gf2p2__987__f;
    __Vfunc_aes_mul_gf2p4__984__c = __Vfunc_aes_mul_gf2p2__987__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__988__g = __Vfunc_aes_mul_gf2p4__984__b;
    __Vfunc_aes_scale_omega2_gf2p2__988__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__988__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__988__g)));
    __Vfunc_aes_scale_omega2_gf2p2__988__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__988__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__984__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__984__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__984__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__988__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__989__g = __Vfunc_aes_mul_gf2p4__984__b;
    __Vfunc_aes_scale_omega2_gf2p2__989__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__989__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__989__g)));
    __Vfunc_aes_scale_omega2_gf2p2__989__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__989__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__984__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__984__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__984__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__989__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__984__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__984__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__984__Vfuncout;
    __Vfunc_aes_mul_gf2p4__942__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__942__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__943__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__942__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__943__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__942__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__943__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__943__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__943__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__943__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__943__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__943__d)));
    __Vfunc_aes_mul_gf2p2__943__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__943__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__943__d)));
    __Vfunc_aes_mul_gf2p2__943__f = ((((IData)(__Vfunc_aes_mul_gf2p2__943__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__943__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__943__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__943__b)));
    __Vfunc_aes_mul_gf2p2__943__Vfuncout = __Vfunc_aes_mul_gf2p2__943__f;
    __Vfunc_aes_mul_gf2p4__942__a = __Vfunc_aes_mul_gf2p2__943__Vfuncout;
    __Vfunc_aes_mul_gf2p2__944__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__942__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__942__delta)));
    __Vfunc_aes_mul_gf2p2__944__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__942__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__942__gamma)));
    __Vfunc_aes_mul_gf2p2__944__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__944__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__944__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__944__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__944__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__944__d)));
    __Vfunc_aes_mul_gf2p2__944__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__944__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__944__d)));
    __Vfunc_aes_mul_gf2p2__944__f = ((((IData)(__Vfunc_aes_mul_gf2p2__944__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__944__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__944__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__944__b)));
    __Vfunc_aes_mul_gf2p2__944__Vfuncout = __Vfunc_aes_mul_gf2p2__944__f;
    __Vfunc_aes_mul_gf2p4__942__b = __Vfunc_aes_mul_gf2p2__944__Vfuncout;
    __Vfunc_aes_mul_gf2p2__945__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__942__delta));
    __Vfunc_aes_mul_gf2p2__945__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__942__gamma));
    __Vfunc_aes_mul_gf2p2__945__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__945__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__945__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__945__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__945__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__945__d)));
    __Vfunc_aes_mul_gf2p2__945__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__945__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__945__d)));
    __Vfunc_aes_mul_gf2p2__945__f = ((((IData)(__Vfunc_aes_mul_gf2p2__945__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__945__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__945__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__945__b)));
    __Vfunc_aes_mul_gf2p2__945__Vfuncout = __Vfunc_aes_mul_gf2p2__945__f;
    __Vfunc_aes_mul_gf2p4__942__c = __Vfunc_aes_mul_gf2p2__945__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__946__g = __Vfunc_aes_mul_gf2p4__942__b;
    __Vfunc_aes_scale_omega2_gf2p2__946__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__946__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__946__g)));
    __Vfunc_aes_scale_omega2_gf2p2__946__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__946__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__942__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__942__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__942__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__946__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__947__g = __Vfunc_aes_mul_gf2p4__942__b;
    __Vfunc_aes_scale_omega2_gf2p2__947__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__947__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__947__g)));
    __Vfunc_aes_scale_omega2_gf2p2__947__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__947__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__942__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__942__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__942__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__947__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__942__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__942__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__942__Vfuncout;
    __Vfunc_aes_mul_gf2p4__960__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__960__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__961__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__960__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__961__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__960__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__961__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__961__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__961__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__961__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__961__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__961__d)));
    __Vfunc_aes_mul_gf2p2__961__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__961__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__961__d)));
    __Vfunc_aes_mul_gf2p2__961__f = ((((IData)(__Vfunc_aes_mul_gf2p2__961__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__961__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__961__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__961__b)));
    __Vfunc_aes_mul_gf2p2__961__Vfuncout = __Vfunc_aes_mul_gf2p2__961__f;
    __Vfunc_aes_mul_gf2p4__960__a = __Vfunc_aes_mul_gf2p2__961__Vfuncout;
    __Vfunc_aes_mul_gf2p2__962__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__960__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__960__delta)));
    __Vfunc_aes_mul_gf2p2__962__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__960__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__960__gamma)));
    __Vfunc_aes_mul_gf2p2__962__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__962__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__962__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__962__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__962__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__962__d)));
    __Vfunc_aes_mul_gf2p2__962__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__962__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__962__d)));
    __Vfunc_aes_mul_gf2p2__962__f = ((((IData)(__Vfunc_aes_mul_gf2p2__962__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__962__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__962__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__962__b)));
    __Vfunc_aes_mul_gf2p2__962__Vfuncout = __Vfunc_aes_mul_gf2p2__962__f;
    __Vfunc_aes_mul_gf2p4__960__b = __Vfunc_aes_mul_gf2p2__962__Vfuncout;
    __Vfunc_aes_mul_gf2p2__963__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__960__delta));
    __Vfunc_aes_mul_gf2p2__963__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__960__gamma));
    __Vfunc_aes_mul_gf2p2__963__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__963__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__963__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__963__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__963__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__963__d)));
    __Vfunc_aes_mul_gf2p2__963__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__963__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__963__d)));
    __Vfunc_aes_mul_gf2p2__963__f = ((((IData)(__Vfunc_aes_mul_gf2p2__963__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__963__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__963__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__963__b)));
    __Vfunc_aes_mul_gf2p2__963__Vfuncout = __Vfunc_aes_mul_gf2p2__963__f;
    __Vfunc_aes_mul_gf2p4__960__c = __Vfunc_aes_mul_gf2p2__963__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__964__g = __Vfunc_aes_mul_gf2p4__960__b;
    __Vfunc_aes_scale_omega2_gf2p2__964__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__964__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__964__g)));
    __Vfunc_aes_scale_omega2_gf2p2__964__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__964__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__960__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__960__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__960__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__964__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__965__g = __Vfunc_aes_mul_gf2p4__960__b;
    __Vfunc_aes_scale_omega2_gf2p2__965__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__965__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__965__g)));
    __Vfunc_aes_scale_omega2_gf2p2__965__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__965__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__960__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__960__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__960__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__965__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__960__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__960__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__960__Vfuncout;
    __Vfunc_aes_mul_gf2p4__966__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 8U));
    __Vfunc_aes_mul_gf2p4__966__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__967__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__966__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__967__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__966__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__967__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__967__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__967__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__967__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__967__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__967__d)));
    __Vfunc_aes_mul_gf2p2__967__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__967__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__967__d)));
    __Vfunc_aes_mul_gf2p2__967__f = ((((IData)(__Vfunc_aes_mul_gf2p2__967__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__967__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__967__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__967__b)));
    __Vfunc_aes_mul_gf2p2__967__Vfuncout = __Vfunc_aes_mul_gf2p2__967__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__a = __Vfunc_aes_mul_gf2p2__967__Vfuncout;
    __Vfunc_aes_mul_gf2p2__968__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__966__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__966__delta)));
    __Vfunc_aes_mul_gf2p2__968__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__966__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__966__gamma)));
    __Vfunc_aes_mul_gf2p2__968__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__968__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__968__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__968__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__968__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__968__d)));
    __Vfunc_aes_mul_gf2p2__968__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__968__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__968__d)));
    __Vfunc_aes_mul_gf2p2__968__f = ((((IData)(__Vfunc_aes_mul_gf2p2__968__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__968__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__968__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__968__b)));
    __Vfunc_aes_mul_gf2p2__968__Vfuncout = __Vfunc_aes_mul_gf2p2__968__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__b = __Vfunc_aes_mul_gf2p2__968__Vfuncout;
    __Vfunc_aes_mul_gf2p2__969__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__966__delta));
    __Vfunc_aes_mul_gf2p2__969__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__966__gamma));
    __Vfunc_aes_mul_gf2p2__969__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__969__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__969__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__969__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__969__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__969__d)));
    __Vfunc_aes_mul_gf2p2__969__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__969__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__969__d)));
    __Vfunc_aes_mul_gf2p2__969__f = ((((IData)(__Vfunc_aes_mul_gf2p2__969__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__969__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__969__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__969__b)));
    __Vfunc_aes_mul_gf2p2__969__Vfuncout = __Vfunc_aes_mul_gf2p2__969__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__c = __Vfunc_aes_mul_gf2p2__969__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__970__g = vlSelf->__Vfunc_aes_mul_gf2p4__966__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__970__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__970__g)));
    __Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__971__g = vlSelf->__Vfunc_aes_mul_gf2p4__966__b;
    __Vfunc_aes_scale_omega2_gf2p2__971__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__971__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__971__g)));
    __Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__971__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__966__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__966__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__966__Vfuncout;
    __Vfunc_aes_mul_gf2p4__978__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__978__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__979__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__978__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__979__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__978__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__979__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__979__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__979__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__979__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__979__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__979__d)));
    __Vfunc_aes_mul_gf2p2__979__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__979__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__979__d)));
    __Vfunc_aes_mul_gf2p2__979__f = ((((IData)(__Vfunc_aes_mul_gf2p2__979__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__979__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__979__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__979__b)));
    __Vfunc_aes_mul_gf2p2__979__Vfuncout = __Vfunc_aes_mul_gf2p2__979__f;
    __Vfunc_aes_mul_gf2p4__978__a = __Vfunc_aes_mul_gf2p2__979__Vfuncout;
    __Vfunc_aes_mul_gf2p2__980__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__978__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__978__delta)));
    __Vfunc_aes_mul_gf2p2__980__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__978__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__978__gamma)));
    __Vfunc_aes_mul_gf2p2__980__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__980__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__980__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__980__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__980__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__980__d)));
    __Vfunc_aes_mul_gf2p2__980__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__980__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__980__d)));
    __Vfunc_aes_mul_gf2p2__980__f = ((((IData)(__Vfunc_aes_mul_gf2p2__980__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__980__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__980__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__980__b)));
    __Vfunc_aes_mul_gf2p2__980__Vfuncout = __Vfunc_aes_mul_gf2p2__980__f;
    __Vfunc_aes_mul_gf2p4__978__b = __Vfunc_aes_mul_gf2p2__980__Vfuncout;
    __Vfunc_aes_mul_gf2p2__981__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__978__delta));
    __Vfunc_aes_mul_gf2p2__981__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__978__gamma));
    __Vfunc_aes_mul_gf2p2__981__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__981__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__981__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__981__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__981__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__981__d)));
    __Vfunc_aes_mul_gf2p2__981__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__981__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__981__d)));
    __Vfunc_aes_mul_gf2p2__981__f = ((((IData)(__Vfunc_aes_mul_gf2p2__981__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__981__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__981__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__981__b)));
    __Vfunc_aes_mul_gf2p2__981__Vfuncout = __Vfunc_aes_mul_gf2p2__981__f;
    __Vfunc_aes_mul_gf2p4__978__c = __Vfunc_aes_mul_gf2p2__981__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__982__g = __Vfunc_aes_mul_gf2p4__978__b;
    __Vfunc_aes_scale_omega2_gf2p2__982__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__982__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__982__g)));
    __Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__982__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__978__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__978__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__983__g = __Vfunc_aes_mul_gf2p4__978__b;
    __Vfunc_aes_scale_omega2_gf2p2__983__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__983__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__983__g)));
    __Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__983__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__978__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__978__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__978__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__978__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__978__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__928__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                              >> 2U));
    __Vfunc_aes_square_gf2p2__928__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__928__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__928__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__928__Vfuncout = __Vfunc_aes_square_gf2p2__928__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__928__Vfuncout;
    __Vfunc_aes_square_gf2p2__929__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__929__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__929__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__929__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__929__Vfuncout = __Vfunc_aes_square_gf2p2__929__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__929__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__80(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__80\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1052__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1052__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1052__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1052__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1052__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1052__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1053__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1053__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1053__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1053__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1054__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1054__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1054__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1054__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1055__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1055__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1055__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1055__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1056__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1056__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1056__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1057__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1057__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1057__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1070__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1070__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1070__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1070__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1070__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1070__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1071__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1071__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1071__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1071__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1072__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1072__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1072__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1072__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1073__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1073__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1073__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1073__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1074__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1074__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1074__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1075__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1075__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1075__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1077__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1077__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1077__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1077__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1078__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1078__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1078__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1078__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1079__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1079__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1079__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1079__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1080__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1081__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1081__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1082__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1086__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1086__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1087__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1087__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1092__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1092__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1093__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1093__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1094__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1094__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1094__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1094__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1094__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1094__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1095__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1095__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1095__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1095__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1096__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1096__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1096__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1096__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1097__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1097__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1097__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1097__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1098__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1098__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1098__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1099__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1099__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1099__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1085__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1085__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1085__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1085__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1085__b)));
    __Vfunc_aes_mul_gf2p2__1085__Vfuncout = __Vfunc_aes_mul_gf2p2__1085__f;
    __Vfunc_aes_mul_gf2p4__1082__c = __Vfunc_aes_mul_gf2p2__1085__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1086__g = vlSelf->__Vfunc_aes_mul_gf2p4__1082__b;
    __Vfunc_aes_scale_omega2_gf2p2__1086__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1086__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1086__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1086__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1082__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1087__g = vlSelf->__Vfunc_aes_mul_gf2p4__1082__b;
    __Vfunc_aes_scale_omega2_gf2p2__1087__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1087__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1087__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1087__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1082__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1082__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1082__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1094__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1094__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1095__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1094__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1095__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1094__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1095__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1095__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1095__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1095__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1095__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1095__d)));
    __Vfunc_aes_mul_gf2p2__1095__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1095__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1095__d)));
    __Vfunc_aes_mul_gf2p2__1095__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1095__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1095__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1095__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1095__b)));
    __Vfunc_aes_mul_gf2p2__1095__Vfuncout = __Vfunc_aes_mul_gf2p2__1095__f;
    __Vfunc_aes_mul_gf2p4__1094__a = __Vfunc_aes_mul_gf2p2__1095__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1096__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1094__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1094__delta)));
    __Vfunc_aes_mul_gf2p2__1096__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1094__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1094__gamma)));
    __Vfunc_aes_mul_gf2p2__1096__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1096__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1096__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1096__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1096__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1096__d)));
    __Vfunc_aes_mul_gf2p2__1096__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1096__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1096__d)));
    __Vfunc_aes_mul_gf2p2__1096__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1096__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1096__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1096__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1096__b)));
    __Vfunc_aes_mul_gf2p2__1096__Vfuncout = __Vfunc_aes_mul_gf2p2__1096__f;
    __Vfunc_aes_mul_gf2p4__1094__b = __Vfunc_aes_mul_gf2p2__1096__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1097__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1094__delta));
    __Vfunc_aes_mul_gf2p2__1097__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1094__gamma));
    __Vfunc_aes_mul_gf2p2__1097__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1097__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1097__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1097__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1097__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1097__d)));
    __Vfunc_aes_mul_gf2p2__1097__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1097__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1097__d)));
    __Vfunc_aes_mul_gf2p2__1097__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1097__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1097__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1097__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1097__b)));
    __Vfunc_aes_mul_gf2p2__1097__Vfuncout = __Vfunc_aes_mul_gf2p2__1097__f;
    __Vfunc_aes_mul_gf2p4__1094__c = __Vfunc_aes_mul_gf2p2__1097__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1098__g = __Vfunc_aes_mul_gf2p4__1094__b;
    __Vfunc_aes_scale_omega2_gf2p2__1098__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1098__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1098__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1098__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1098__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1094__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1098__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1099__g = __Vfunc_aes_mul_gf2p4__1094__b;
    __Vfunc_aes_scale_omega2_gf2p2__1099__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1099__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1099__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1099__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1099__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1094__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1099__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1094__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1094__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1052__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1052__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1053__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1052__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1053__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1052__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1053__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1053__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1053__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1053__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1053__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1053__d)));
    __Vfunc_aes_mul_gf2p2__1053__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1053__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1053__d)));
    __Vfunc_aes_mul_gf2p2__1053__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1053__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1053__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1053__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1053__b)));
    __Vfunc_aes_mul_gf2p2__1053__Vfuncout = __Vfunc_aes_mul_gf2p2__1053__f;
    __Vfunc_aes_mul_gf2p4__1052__a = __Vfunc_aes_mul_gf2p2__1053__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1054__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1052__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1052__delta)));
    __Vfunc_aes_mul_gf2p2__1054__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1052__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1052__gamma)));
    __Vfunc_aes_mul_gf2p2__1054__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1054__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1054__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1054__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1054__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1054__d)));
    __Vfunc_aes_mul_gf2p2__1054__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1054__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1054__d)));
    __Vfunc_aes_mul_gf2p2__1054__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1054__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1054__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1054__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1054__b)));
    __Vfunc_aes_mul_gf2p2__1054__Vfuncout = __Vfunc_aes_mul_gf2p2__1054__f;
    __Vfunc_aes_mul_gf2p4__1052__b = __Vfunc_aes_mul_gf2p2__1054__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1055__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1052__delta));
    __Vfunc_aes_mul_gf2p2__1055__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1052__gamma));
    __Vfunc_aes_mul_gf2p2__1055__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1055__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1055__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1055__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1055__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1055__d)));
    __Vfunc_aes_mul_gf2p2__1055__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1055__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1055__d)));
    __Vfunc_aes_mul_gf2p2__1055__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1055__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1055__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1055__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1055__b)));
    __Vfunc_aes_mul_gf2p2__1055__Vfuncout = __Vfunc_aes_mul_gf2p2__1055__f;
    __Vfunc_aes_mul_gf2p4__1052__c = __Vfunc_aes_mul_gf2p2__1055__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1056__g = __Vfunc_aes_mul_gf2p4__1052__b;
    __Vfunc_aes_scale_omega2_gf2p2__1056__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1056__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1056__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1056__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1056__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1052__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1056__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1057__g = __Vfunc_aes_mul_gf2p4__1052__b;
    __Vfunc_aes_scale_omega2_gf2p2__1057__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1057__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1057__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1057__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1057__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1052__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1057__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1052__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1052__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1070__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1070__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1071__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1070__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1071__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1070__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1071__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1071__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1071__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1071__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1071__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1071__d)));
    __Vfunc_aes_mul_gf2p2__1071__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1071__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1071__d)));
    __Vfunc_aes_mul_gf2p2__1071__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1071__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1071__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1071__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1071__b)));
    __Vfunc_aes_mul_gf2p2__1071__Vfuncout = __Vfunc_aes_mul_gf2p2__1071__f;
    __Vfunc_aes_mul_gf2p4__1070__a = __Vfunc_aes_mul_gf2p2__1071__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1072__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1070__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1070__delta)));
    __Vfunc_aes_mul_gf2p2__1072__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1070__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1070__gamma)));
    __Vfunc_aes_mul_gf2p2__1072__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1072__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1072__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1072__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1072__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1072__d)));
    __Vfunc_aes_mul_gf2p2__1072__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1072__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1072__d)));
    __Vfunc_aes_mul_gf2p2__1072__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1072__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1072__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1072__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1072__b)));
    __Vfunc_aes_mul_gf2p2__1072__Vfuncout = __Vfunc_aes_mul_gf2p2__1072__f;
    __Vfunc_aes_mul_gf2p4__1070__b = __Vfunc_aes_mul_gf2p2__1072__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1073__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1070__delta));
    __Vfunc_aes_mul_gf2p2__1073__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1070__gamma));
    __Vfunc_aes_mul_gf2p2__1073__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1073__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1073__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1073__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1073__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1073__d)));
    __Vfunc_aes_mul_gf2p2__1073__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1073__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1073__d)));
    __Vfunc_aes_mul_gf2p2__1073__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1073__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1073__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1073__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1073__b)));
    __Vfunc_aes_mul_gf2p2__1073__Vfuncout = __Vfunc_aes_mul_gf2p2__1073__f;
    __Vfunc_aes_mul_gf2p4__1070__c = __Vfunc_aes_mul_gf2p2__1073__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1074__g = __Vfunc_aes_mul_gf2p4__1070__b;
    __Vfunc_aes_scale_omega2_gf2p2__1074__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1074__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1074__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1074__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1074__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1070__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1074__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1075__g = __Vfunc_aes_mul_gf2p4__1070__b;
    __Vfunc_aes_scale_omega2_gf2p2__1075__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1075__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1075__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1075__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1075__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1070__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1075__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1070__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1070__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1076__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1076__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1077__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1076__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1077__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1076__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1077__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1077__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1077__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1077__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1077__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1077__d)));
    __Vfunc_aes_mul_gf2p2__1077__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1077__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1077__d)));
    __Vfunc_aes_mul_gf2p2__1077__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1077__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1077__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1077__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1077__b)));
    __Vfunc_aes_mul_gf2p2__1077__Vfuncout = __Vfunc_aes_mul_gf2p2__1077__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__a = __Vfunc_aes_mul_gf2p2__1077__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1078__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1076__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1076__delta)));
    __Vfunc_aes_mul_gf2p2__1078__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1076__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1076__gamma)));
    __Vfunc_aes_mul_gf2p2__1078__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1078__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1078__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1078__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1078__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1078__d)));
    __Vfunc_aes_mul_gf2p2__1078__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1078__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1078__d)));
    __Vfunc_aes_mul_gf2p2__1078__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1078__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1078__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1078__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1078__b)));
    __Vfunc_aes_mul_gf2p2__1078__Vfuncout = __Vfunc_aes_mul_gf2p2__1078__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__b = __Vfunc_aes_mul_gf2p2__1078__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1079__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1076__delta));
    __Vfunc_aes_mul_gf2p2__1079__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1076__gamma));
    __Vfunc_aes_mul_gf2p2__1079__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1079__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1079__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1079__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1079__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1079__d)));
    __Vfunc_aes_mul_gf2p2__1079__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1079__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1079__d)));
    __Vfunc_aes_mul_gf2p2__1079__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1079__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1079__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1079__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1079__b)));
    __Vfunc_aes_mul_gf2p2__1079__Vfuncout = __Vfunc_aes_mul_gf2p2__1079__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__c = __Vfunc_aes_mul_gf2p2__1079__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1080__g = vlSelf->__Vfunc_aes_mul_gf2p4__1076__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1080__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1080__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1081__g = vlSelf->__Vfunc_aes_mul_gf2p4__1076__b;
    __Vfunc_aes_scale_omega2_gf2p2__1081__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1081__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1081__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1081__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1076__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1076__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1088__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1088__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1089__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1088__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1089__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1088__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1089__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1089__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1089__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1089__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1089__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1089__d)));
    __Vfunc_aes_mul_gf2p2__1089__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1089__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1089__d)));
    __Vfunc_aes_mul_gf2p2__1089__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1089__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1089__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1089__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1089__b)));
    __Vfunc_aes_mul_gf2p2__1089__Vfuncout = __Vfunc_aes_mul_gf2p2__1089__f;
    __Vfunc_aes_mul_gf2p4__1088__a = __Vfunc_aes_mul_gf2p2__1089__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1090__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1088__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1088__delta)));
    __Vfunc_aes_mul_gf2p2__1090__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1088__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1088__gamma)));
    __Vfunc_aes_mul_gf2p2__1090__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1090__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1090__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1090__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1090__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1090__d)));
    __Vfunc_aes_mul_gf2p2__1090__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1090__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1090__d)));
    __Vfunc_aes_mul_gf2p2__1090__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1090__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1090__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1090__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1090__b)));
    __Vfunc_aes_mul_gf2p2__1090__Vfuncout = __Vfunc_aes_mul_gf2p2__1090__f;
    __Vfunc_aes_mul_gf2p4__1088__b = __Vfunc_aes_mul_gf2p2__1090__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1091__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1088__delta));
    __Vfunc_aes_mul_gf2p2__1091__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1088__gamma));
    __Vfunc_aes_mul_gf2p2__1091__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1091__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1091__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1091__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1091__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1091__d)));
    __Vfunc_aes_mul_gf2p2__1091__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1091__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1091__d)));
    __Vfunc_aes_mul_gf2p2__1091__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1091__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1091__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1091__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1091__b)));
    __Vfunc_aes_mul_gf2p2__1091__Vfuncout = __Vfunc_aes_mul_gf2p2__1091__f;
    __Vfunc_aes_mul_gf2p4__1088__c = __Vfunc_aes_mul_gf2p2__1091__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1092__g = __Vfunc_aes_mul_gf2p4__1088__b;
    __Vfunc_aes_scale_omega2_gf2p2__1092__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1092__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1092__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1092__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1088__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1093__g = __Vfunc_aes_mul_gf2p4__1088__b;
    __Vfunc_aes_scale_omega2_gf2p2__1093__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1093__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1093__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1093__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1088__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1088__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1088__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__1038__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1038__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1038__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1038__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1038__Vfuncout = __Vfunc_aes_square_gf2p2__1038__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1038__Vfuncout;
    __Vfunc_aes_square_gf2p2__1039__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1039__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1039__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1039__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1039__Vfuncout = __Vfunc_aes_square_gf2p2__1039__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1039__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__82(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__82\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1162__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1162__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1162__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1162__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1162__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1162__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1163__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1163__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1163__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1163__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1164__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1164__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1164__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1164__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1165__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1165__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1165__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1165__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1166__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1166__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1166__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1167__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1167__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1167__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1180__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1180__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1180__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1180__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1180__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1180__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1181__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1181__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1181__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1181__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1182__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1182__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1182__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1182__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1183__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1183__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1183__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1183__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1184__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1184__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1184__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1185__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1185__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1185__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1187__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1187__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1187__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1187__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1188__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1188__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1188__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1188__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1189__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1189__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1189__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1189__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1190__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1191__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1191__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1192__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1196__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1196__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1197__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1197__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1202__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1202__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1203__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1203__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1204__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1204__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1204__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1204__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1204__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1204__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1205__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1205__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1205__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1205__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1206__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1206__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1206__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1206__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1207__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1207__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1207__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1207__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1208__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1208__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1208__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1209__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1209__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1209__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1195__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1195__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1195__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1195__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1195__b)));
    __Vfunc_aes_mul_gf2p2__1195__Vfuncout = __Vfunc_aes_mul_gf2p2__1195__f;
    __Vfunc_aes_mul_gf2p4__1192__c = __Vfunc_aes_mul_gf2p2__1195__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1196__g = vlSelf->__Vfunc_aes_mul_gf2p4__1192__b;
    __Vfunc_aes_scale_omega2_gf2p2__1196__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1196__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1196__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1196__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1192__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1197__g = vlSelf->__Vfunc_aes_mul_gf2p4__1192__b;
    __Vfunc_aes_scale_omega2_gf2p2__1197__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1197__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1197__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1197__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1192__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1192__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1192__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1204__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1204__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1205__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1204__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1205__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1204__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1205__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1205__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1205__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1205__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1205__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1205__d)));
    __Vfunc_aes_mul_gf2p2__1205__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1205__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1205__d)));
    __Vfunc_aes_mul_gf2p2__1205__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1205__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1205__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1205__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1205__b)));
    __Vfunc_aes_mul_gf2p2__1205__Vfuncout = __Vfunc_aes_mul_gf2p2__1205__f;
    __Vfunc_aes_mul_gf2p4__1204__a = __Vfunc_aes_mul_gf2p2__1205__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1206__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1204__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1204__delta)));
    __Vfunc_aes_mul_gf2p2__1206__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1204__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1204__gamma)));
    __Vfunc_aes_mul_gf2p2__1206__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1206__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1206__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1206__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1206__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1206__d)));
    __Vfunc_aes_mul_gf2p2__1206__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1206__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1206__d)));
    __Vfunc_aes_mul_gf2p2__1206__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1206__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1206__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1206__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1206__b)));
    __Vfunc_aes_mul_gf2p2__1206__Vfuncout = __Vfunc_aes_mul_gf2p2__1206__f;
    __Vfunc_aes_mul_gf2p4__1204__b = __Vfunc_aes_mul_gf2p2__1206__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1207__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1204__delta));
    __Vfunc_aes_mul_gf2p2__1207__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1204__gamma));
    __Vfunc_aes_mul_gf2p2__1207__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1207__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1207__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1207__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1207__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1207__d)));
    __Vfunc_aes_mul_gf2p2__1207__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1207__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1207__d)));
    __Vfunc_aes_mul_gf2p2__1207__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1207__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1207__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1207__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1207__b)));
    __Vfunc_aes_mul_gf2p2__1207__Vfuncout = __Vfunc_aes_mul_gf2p2__1207__f;
    __Vfunc_aes_mul_gf2p4__1204__c = __Vfunc_aes_mul_gf2p2__1207__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1208__g = __Vfunc_aes_mul_gf2p4__1204__b;
    __Vfunc_aes_scale_omega2_gf2p2__1208__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1208__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1208__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1208__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1208__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1204__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1208__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1209__g = __Vfunc_aes_mul_gf2p4__1204__b;
    __Vfunc_aes_scale_omega2_gf2p2__1209__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1209__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1209__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1209__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1209__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1204__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1209__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1204__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1204__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1162__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1162__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1163__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1162__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1163__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1162__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1163__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1163__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1163__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1163__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1163__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1163__d)));
    __Vfunc_aes_mul_gf2p2__1163__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1163__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1163__d)));
    __Vfunc_aes_mul_gf2p2__1163__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1163__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1163__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1163__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1163__b)));
    __Vfunc_aes_mul_gf2p2__1163__Vfuncout = __Vfunc_aes_mul_gf2p2__1163__f;
    __Vfunc_aes_mul_gf2p4__1162__a = __Vfunc_aes_mul_gf2p2__1163__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1164__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1162__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1162__delta)));
    __Vfunc_aes_mul_gf2p2__1164__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1162__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1162__gamma)));
    __Vfunc_aes_mul_gf2p2__1164__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1164__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1164__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1164__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1164__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1164__d)));
    __Vfunc_aes_mul_gf2p2__1164__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1164__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1164__d)));
    __Vfunc_aes_mul_gf2p2__1164__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1164__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1164__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1164__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1164__b)));
    __Vfunc_aes_mul_gf2p2__1164__Vfuncout = __Vfunc_aes_mul_gf2p2__1164__f;
    __Vfunc_aes_mul_gf2p4__1162__b = __Vfunc_aes_mul_gf2p2__1164__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1165__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1162__delta));
    __Vfunc_aes_mul_gf2p2__1165__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1162__gamma));
    __Vfunc_aes_mul_gf2p2__1165__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1165__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1165__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1165__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1165__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1165__d)));
    __Vfunc_aes_mul_gf2p2__1165__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1165__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1165__d)));
    __Vfunc_aes_mul_gf2p2__1165__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1165__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1165__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1165__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1165__b)));
    __Vfunc_aes_mul_gf2p2__1165__Vfuncout = __Vfunc_aes_mul_gf2p2__1165__f;
    __Vfunc_aes_mul_gf2p4__1162__c = __Vfunc_aes_mul_gf2p2__1165__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1166__g = __Vfunc_aes_mul_gf2p4__1162__b;
    __Vfunc_aes_scale_omega2_gf2p2__1166__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1166__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1166__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1166__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1166__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1162__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1166__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1167__g = __Vfunc_aes_mul_gf2p4__1162__b;
    __Vfunc_aes_scale_omega2_gf2p2__1167__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1167__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1167__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1167__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1167__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1162__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1167__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1162__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1162__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1180__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1180__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1181__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1180__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1181__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1180__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1181__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1181__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1181__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1181__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1181__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1181__d)));
    __Vfunc_aes_mul_gf2p2__1181__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1181__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1181__d)));
    __Vfunc_aes_mul_gf2p2__1181__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1181__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1181__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1181__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1181__b)));
    __Vfunc_aes_mul_gf2p2__1181__Vfuncout = __Vfunc_aes_mul_gf2p2__1181__f;
    __Vfunc_aes_mul_gf2p4__1180__a = __Vfunc_aes_mul_gf2p2__1181__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1182__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1180__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1180__delta)));
    __Vfunc_aes_mul_gf2p2__1182__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1180__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1180__gamma)));
    __Vfunc_aes_mul_gf2p2__1182__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1182__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1182__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1182__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1182__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1182__d)));
    __Vfunc_aes_mul_gf2p2__1182__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1182__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1182__d)));
    __Vfunc_aes_mul_gf2p2__1182__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1182__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1182__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1182__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1182__b)));
    __Vfunc_aes_mul_gf2p2__1182__Vfuncout = __Vfunc_aes_mul_gf2p2__1182__f;
    __Vfunc_aes_mul_gf2p4__1180__b = __Vfunc_aes_mul_gf2p2__1182__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1183__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1180__delta));
    __Vfunc_aes_mul_gf2p2__1183__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1180__gamma));
    __Vfunc_aes_mul_gf2p2__1183__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1183__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1183__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1183__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1183__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1183__d)));
    __Vfunc_aes_mul_gf2p2__1183__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1183__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1183__d)));
    __Vfunc_aes_mul_gf2p2__1183__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1183__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1183__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1183__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1183__b)));
    __Vfunc_aes_mul_gf2p2__1183__Vfuncout = __Vfunc_aes_mul_gf2p2__1183__f;
    __Vfunc_aes_mul_gf2p4__1180__c = __Vfunc_aes_mul_gf2p2__1183__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1184__g = __Vfunc_aes_mul_gf2p4__1180__b;
    __Vfunc_aes_scale_omega2_gf2p2__1184__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1184__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1184__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1184__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1184__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1180__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1184__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1185__g = __Vfunc_aes_mul_gf2p4__1180__b;
    __Vfunc_aes_scale_omega2_gf2p2__1185__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1185__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1185__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1185__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1185__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1180__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1185__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1180__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1180__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1186__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1186__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1187__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1186__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1187__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1186__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1187__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1187__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1187__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1187__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1187__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1187__d)));
    __Vfunc_aes_mul_gf2p2__1187__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1187__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1187__d)));
    __Vfunc_aes_mul_gf2p2__1187__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1187__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1187__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1187__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1187__b)));
    __Vfunc_aes_mul_gf2p2__1187__Vfuncout = __Vfunc_aes_mul_gf2p2__1187__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__a = __Vfunc_aes_mul_gf2p2__1187__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1188__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1186__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1186__delta)));
    __Vfunc_aes_mul_gf2p2__1188__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1186__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1186__gamma)));
    __Vfunc_aes_mul_gf2p2__1188__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1188__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1188__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1188__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1188__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1188__d)));
    __Vfunc_aes_mul_gf2p2__1188__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1188__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1188__d)));
    __Vfunc_aes_mul_gf2p2__1188__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1188__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1188__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1188__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1188__b)));
    __Vfunc_aes_mul_gf2p2__1188__Vfuncout = __Vfunc_aes_mul_gf2p2__1188__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__b = __Vfunc_aes_mul_gf2p2__1188__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1189__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1186__delta));
    __Vfunc_aes_mul_gf2p2__1189__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1186__gamma));
    __Vfunc_aes_mul_gf2p2__1189__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1189__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1189__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1189__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1189__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1189__d)));
    __Vfunc_aes_mul_gf2p2__1189__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1189__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1189__d)));
    __Vfunc_aes_mul_gf2p2__1189__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1189__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1189__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1189__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1189__b)));
    __Vfunc_aes_mul_gf2p2__1189__Vfuncout = __Vfunc_aes_mul_gf2p2__1189__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__c = __Vfunc_aes_mul_gf2p2__1189__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1190__g = vlSelf->__Vfunc_aes_mul_gf2p4__1186__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1190__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1190__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1191__g = vlSelf->__Vfunc_aes_mul_gf2p4__1186__b;
    __Vfunc_aes_scale_omega2_gf2p2__1191__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1191__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1191__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1191__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1186__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1186__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1198__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1198__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1199__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1198__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1199__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1198__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1199__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1199__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1199__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1199__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1199__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1199__d)));
    __Vfunc_aes_mul_gf2p2__1199__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1199__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1199__d)));
    __Vfunc_aes_mul_gf2p2__1199__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1199__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1199__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1199__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1199__b)));
    __Vfunc_aes_mul_gf2p2__1199__Vfuncout = __Vfunc_aes_mul_gf2p2__1199__f;
    __Vfunc_aes_mul_gf2p4__1198__a = __Vfunc_aes_mul_gf2p2__1199__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1200__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1198__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1198__delta)));
    __Vfunc_aes_mul_gf2p2__1200__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1198__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1198__gamma)));
    __Vfunc_aes_mul_gf2p2__1200__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1200__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1200__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1200__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1200__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1200__d)));
    __Vfunc_aes_mul_gf2p2__1200__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1200__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1200__d)));
    __Vfunc_aes_mul_gf2p2__1200__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1200__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1200__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1200__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1200__b)));
    __Vfunc_aes_mul_gf2p2__1200__Vfuncout = __Vfunc_aes_mul_gf2p2__1200__f;
    __Vfunc_aes_mul_gf2p4__1198__b = __Vfunc_aes_mul_gf2p2__1200__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1201__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1198__delta));
    __Vfunc_aes_mul_gf2p2__1201__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1198__gamma));
    __Vfunc_aes_mul_gf2p2__1201__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1201__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1201__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1201__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1201__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1201__d)));
    __Vfunc_aes_mul_gf2p2__1201__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1201__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1201__d)));
    __Vfunc_aes_mul_gf2p2__1201__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1201__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1201__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1201__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1201__b)));
    __Vfunc_aes_mul_gf2p2__1201__Vfuncout = __Vfunc_aes_mul_gf2p2__1201__f;
    __Vfunc_aes_mul_gf2p4__1198__c = __Vfunc_aes_mul_gf2p2__1201__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1202__g = __Vfunc_aes_mul_gf2p4__1198__b;
    __Vfunc_aes_scale_omega2_gf2p2__1202__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1202__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1202__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1202__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1198__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1203__g = __Vfunc_aes_mul_gf2p4__1198__b;
    __Vfunc_aes_scale_omega2_gf2p2__1203__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1203__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1203__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1203__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1198__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1198__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1198__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__1148__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1148__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1148__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1148__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1148__Vfuncout = __Vfunc_aes_square_gf2p2__1148__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1148__Vfuncout;
    __Vfunc_aes_square_gf2p2__1149__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1149__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1149__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1149__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1149__Vfuncout = __Vfunc_aes_square_gf2p2__1149__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1149__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__84(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__84\n"); );
    // Init
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1272__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1272__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1272__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1272__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1272__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1272__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1273__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1273__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1273__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1274__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1274__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1274__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1275__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1275__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1275__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1276__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1276__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1276__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1277__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1277__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1277__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1290__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1290__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1290__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1290__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1290__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1290__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1291__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1291__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1291__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1292__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1292__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1292__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1293__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1293__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1293__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1294__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1294__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1294__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1295__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1295__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1295__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1297__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1297__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1297__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1298__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1298__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1298__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1299__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1299__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1299__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1300__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1301__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1301__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1302__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1306__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1306__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1307__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1307__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1312__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1312__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1313__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1313__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1314__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1314__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1314__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1314__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1314__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1314__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1315__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1315__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1315__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1316__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1316__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1316__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1317__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1317__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1317__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1318__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1318__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1318__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1319__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1319__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1319__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1305__f = ((((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1305__a) 
                                        ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1305__b)) 
                                       << 1U) | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1305__c) 
                                                 ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1305__b)));
    __Vfunc_aes_mul_gf2p2__1305__Vfuncout = __Vfunc_aes_mul_gf2p2__1305__f;
    __Vfunc_aes_mul_gf2p4__1302__c = __Vfunc_aes_mul_gf2p2__1305__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1306__g = vlSelf->__Vfunc_aes_mul_gf2p4__1302__b;
    __Vfunc_aes_scale_omega2_gf2p2__1306__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1306__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1306__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1306__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1302__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1307__g = vlSelf->__Vfunc_aes_mul_gf2p4__1302__b;
    __Vfunc_aes_scale_omega2_gf2p2__1307__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1307__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1307__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1307__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1302__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1302__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1302__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1314__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1314__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p2__1315__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1314__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1315__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1314__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1315__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1315__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1315__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1315__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1315__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1315__d)));
    __Vfunc_aes_mul_gf2p2__1315__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1315__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1315__d)));
    __Vfunc_aes_mul_gf2p2__1315__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1315__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1315__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1315__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1315__b)));
    __Vfunc_aes_mul_gf2p2__1315__Vfuncout = __Vfunc_aes_mul_gf2p2__1315__f;
    __Vfunc_aes_mul_gf2p4__1314__a = __Vfunc_aes_mul_gf2p2__1315__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1316__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1314__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1314__delta)));
    __Vfunc_aes_mul_gf2p2__1316__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1314__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1314__gamma)));
    __Vfunc_aes_mul_gf2p2__1316__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1316__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1316__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1316__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1316__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1316__d)));
    __Vfunc_aes_mul_gf2p2__1316__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1316__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1316__d)));
    __Vfunc_aes_mul_gf2p2__1316__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1316__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1316__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1316__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1316__b)));
    __Vfunc_aes_mul_gf2p2__1316__Vfuncout = __Vfunc_aes_mul_gf2p2__1316__f;
    __Vfunc_aes_mul_gf2p4__1314__b = __Vfunc_aes_mul_gf2p2__1316__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1317__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1314__delta));
    __Vfunc_aes_mul_gf2p2__1317__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1314__gamma));
    __Vfunc_aes_mul_gf2p2__1317__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1317__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1317__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1317__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1317__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1317__d)));
    __Vfunc_aes_mul_gf2p2__1317__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1317__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1317__d)));
    __Vfunc_aes_mul_gf2p2__1317__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1317__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1317__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1317__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1317__b)));
    __Vfunc_aes_mul_gf2p2__1317__Vfuncout = __Vfunc_aes_mul_gf2p2__1317__f;
    __Vfunc_aes_mul_gf2p4__1314__c = __Vfunc_aes_mul_gf2p2__1317__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1318__g = __Vfunc_aes_mul_gf2p4__1314__b;
    __Vfunc_aes_scale_omega2_gf2p2__1318__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1318__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1318__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1318__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1318__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1314__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1318__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1319__g = __Vfunc_aes_mul_gf2p4__1314__b;
    __Vfunc_aes_scale_omega2_gf2p2__1319__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1319__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1319__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1319__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1319__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1314__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1319__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1314__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1314__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1272__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p4__1272__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1273__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1272__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1273__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1272__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1273__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1273__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1273__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1273__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1273__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1273__d)));
    __Vfunc_aes_mul_gf2p2__1273__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1273__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1273__d)));
    __Vfunc_aes_mul_gf2p2__1273__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1273__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1273__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1273__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1273__b)));
    __Vfunc_aes_mul_gf2p2__1273__Vfuncout = __Vfunc_aes_mul_gf2p2__1273__f;
    __Vfunc_aes_mul_gf2p4__1272__a = __Vfunc_aes_mul_gf2p2__1273__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1274__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1272__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1272__delta)));
    __Vfunc_aes_mul_gf2p2__1274__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1272__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1272__gamma)));
    __Vfunc_aes_mul_gf2p2__1274__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1274__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1274__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1274__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1274__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1274__d)));
    __Vfunc_aes_mul_gf2p2__1274__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1274__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1274__d)));
    __Vfunc_aes_mul_gf2p2__1274__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1274__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1274__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1274__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1274__b)));
    __Vfunc_aes_mul_gf2p2__1274__Vfuncout = __Vfunc_aes_mul_gf2p2__1274__f;
    __Vfunc_aes_mul_gf2p4__1272__b = __Vfunc_aes_mul_gf2p2__1274__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1275__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1272__delta));
    __Vfunc_aes_mul_gf2p2__1275__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1272__gamma));
    __Vfunc_aes_mul_gf2p2__1275__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1275__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1275__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1275__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1275__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1275__d)));
    __Vfunc_aes_mul_gf2p2__1275__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1275__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1275__d)));
    __Vfunc_aes_mul_gf2p2__1275__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1275__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1275__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1275__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1275__b)));
    __Vfunc_aes_mul_gf2p2__1275__Vfuncout = __Vfunc_aes_mul_gf2p2__1275__f;
    __Vfunc_aes_mul_gf2p4__1272__c = __Vfunc_aes_mul_gf2p2__1275__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1276__g = __Vfunc_aes_mul_gf2p4__1272__b;
    __Vfunc_aes_scale_omega2_gf2p2__1276__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1276__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1276__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1276__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1276__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1272__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1276__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1277__g = __Vfunc_aes_mul_gf2p4__1272__b;
    __Vfunc_aes_scale_omega2_gf2p2__1277__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1277__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1277__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1277__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1277__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1272__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1277__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1272__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1272__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1290__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1290__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1291__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1290__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1291__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1290__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1291__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1291__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1291__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1291__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1291__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1291__d)));
    __Vfunc_aes_mul_gf2p2__1291__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1291__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1291__d)));
    __Vfunc_aes_mul_gf2p2__1291__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1291__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1291__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1291__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1291__b)));
    __Vfunc_aes_mul_gf2p2__1291__Vfuncout = __Vfunc_aes_mul_gf2p2__1291__f;
    __Vfunc_aes_mul_gf2p4__1290__a = __Vfunc_aes_mul_gf2p2__1291__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1292__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1290__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1290__delta)));
    __Vfunc_aes_mul_gf2p2__1292__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1290__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1290__gamma)));
    __Vfunc_aes_mul_gf2p2__1292__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1292__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1292__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1292__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1292__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1292__d)));
    __Vfunc_aes_mul_gf2p2__1292__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1292__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1292__d)));
    __Vfunc_aes_mul_gf2p2__1292__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1292__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1292__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1292__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1292__b)));
    __Vfunc_aes_mul_gf2p2__1292__Vfuncout = __Vfunc_aes_mul_gf2p2__1292__f;
    __Vfunc_aes_mul_gf2p4__1290__b = __Vfunc_aes_mul_gf2p2__1292__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1293__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1290__delta));
    __Vfunc_aes_mul_gf2p2__1293__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1290__gamma));
    __Vfunc_aes_mul_gf2p2__1293__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1293__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1293__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1293__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1293__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1293__d)));
    __Vfunc_aes_mul_gf2p2__1293__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1293__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1293__d)));
    __Vfunc_aes_mul_gf2p2__1293__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1293__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1293__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1293__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1293__b)));
    __Vfunc_aes_mul_gf2p2__1293__Vfuncout = __Vfunc_aes_mul_gf2p2__1293__f;
    __Vfunc_aes_mul_gf2p4__1290__c = __Vfunc_aes_mul_gf2p2__1293__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1294__g = __Vfunc_aes_mul_gf2p4__1290__b;
    __Vfunc_aes_scale_omega2_gf2p2__1294__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1294__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1294__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1294__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1294__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1290__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1294__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1295__g = __Vfunc_aes_mul_gf2p4__1290__b;
    __Vfunc_aes_scale_omega2_gf2p2__1295__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1295__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1295__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1295__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1295__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1290__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1295__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1290__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1290__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1296__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 8U));
    __Vfunc_aes_mul_gf2p4__1296__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1297__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1296__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1297__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1296__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1297__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1297__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1297__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1297__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1297__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1297__d)));
    __Vfunc_aes_mul_gf2p2__1297__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1297__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1297__d)));
    __Vfunc_aes_mul_gf2p2__1297__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1297__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1297__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1297__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1297__b)));
    __Vfunc_aes_mul_gf2p2__1297__Vfuncout = __Vfunc_aes_mul_gf2p2__1297__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__a = __Vfunc_aes_mul_gf2p2__1297__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1298__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1296__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1296__delta)));
    __Vfunc_aes_mul_gf2p2__1298__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1296__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1296__gamma)));
    __Vfunc_aes_mul_gf2p2__1298__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1298__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1298__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1298__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1298__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1298__d)));
    __Vfunc_aes_mul_gf2p2__1298__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1298__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1298__d)));
    __Vfunc_aes_mul_gf2p2__1298__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1298__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1298__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1298__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1298__b)));
    __Vfunc_aes_mul_gf2p2__1298__Vfuncout = __Vfunc_aes_mul_gf2p2__1298__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__b = __Vfunc_aes_mul_gf2p2__1298__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1299__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1296__delta));
    __Vfunc_aes_mul_gf2p2__1299__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1296__gamma));
    __Vfunc_aes_mul_gf2p2__1299__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1299__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1299__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1299__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1299__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1299__d)));
    __Vfunc_aes_mul_gf2p2__1299__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1299__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1299__d)));
    __Vfunc_aes_mul_gf2p2__1299__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1299__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1299__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1299__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1299__b)));
    __Vfunc_aes_mul_gf2p2__1299__Vfuncout = __Vfunc_aes_mul_gf2p2__1299__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__c = __Vfunc_aes_mul_gf2p2__1299__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1300__g = vlSelf->__Vfunc_aes_mul_gf2p4__1296__b;
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__d 
        = ((2U & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1300__g) 
                  << 1U)) | (1U & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1300__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1301__g = vlSelf->__Vfunc_aes_mul_gf2p4__1296__b;
    __Vfunc_aes_scale_omega2_gf2p2__1301__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1301__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1301__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1301__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1296__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1296__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1308__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1308__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1309__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1308__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1309__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1308__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1309__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1309__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1309__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1309__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1309__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1309__d)));
    __Vfunc_aes_mul_gf2p2__1309__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1309__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1309__d)));
    __Vfunc_aes_mul_gf2p2__1309__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1309__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1309__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1309__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1309__b)));
    __Vfunc_aes_mul_gf2p2__1309__Vfuncout = __Vfunc_aes_mul_gf2p2__1309__f;
    __Vfunc_aes_mul_gf2p4__1308__a = __Vfunc_aes_mul_gf2p2__1309__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1310__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1308__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1308__delta)));
    __Vfunc_aes_mul_gf2p2__1310__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1308__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1308__gamma)));
    __Vfunc_aes_mul_gf2p2__1310__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1310__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1310__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1310__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1310__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1310__d)));
    __Vfunc_aes_mul_gf2p2__1310__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1310__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1310__d)));
    __Vfunc_aes_mul_gf2p2__1310__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1310__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1310__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1310__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1310__b)));
    __Vfunc_aes_mul_gf2p2__1310__Vfuncout = __Vfunc_aes_mul_gf2p2__1310__f;
    __Vfunc_aes_mul_gf2p4__1308__b = __Vfunc_aes_mul_gf2p2__1310__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1311__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1308__delta));
    __Vfunc_aes_mul_gf2p2__1311__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1308__gamma));
    __Vfunc_aes_mul_gf2p2__1311__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1311__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1311__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1311__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1311__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1311__d)));
    __Vfunc_aes_mul_gf2p2__1311__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1311__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1311__d)));
    __Vfunc_aes_mul_gf2p2__1311__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1311__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1311__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1311__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1311__b)));
    __Vfunc_aes_mul_gf2p2__1311__Vfuncout = __Vfunc_aes_mul_gf2p2__1311__f;
    __Vfunc_aes_mul_gf2p4__1308__c = __Vfunc_aes_mul_gf2p2__1311__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1312__g = __Vfunc_aes_mul_gf2p4__1308__b;
    __Vfunc_aes_scale_omega2_gf2p2__1312__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1312__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1312__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1312__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1308__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1313__g = __Vfunc_aes_mul_gf2p4__1308__b;
    __Vfunc_aes_scale_omega2_gf2p2__1313__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1313__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1313__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1313__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1308__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1308__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1308__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    __Vfunc_aes_square_gf2p2__1258__g = (3U & ((((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)) 
                                               >> 2U));
    __Vfunc_aes_square_gf2p2__1258__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1258__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1258__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1258__Vfuncout = __Vfunc_aes_square_gf2p2__1258__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1258__Vfuncout;
    __Vfunc_aes_square_gf2p2__1259__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1259__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1259__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1259__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1259__Vfuncout = __Vfunc_aes_square_gf2p2__1259__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1259__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}
