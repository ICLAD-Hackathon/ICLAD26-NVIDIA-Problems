// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__0__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__0__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__0__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__2__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__2__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__2__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__3__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__3__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__3__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__4__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__4__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__4__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__5__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__5__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__5__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__6__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__6__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__6__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__7__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__7__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__7__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__8__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__8__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__8__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__9__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__9__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__9__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__10__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__10__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__10__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__11__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__11__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__11__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__13__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__13__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__13__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__14__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__14__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__14__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__15__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__15__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__15__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__17__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__17__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__17__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__18__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__18__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__18__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__19__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__19__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__19__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__32__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__32__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__32__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__32__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__32__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__32__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__33__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__33__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__33__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__34__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__34__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__34__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__35__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__35__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__35__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__36__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__36__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__36__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__37__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__37__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__37__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__38__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__38__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__38__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__38__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__38__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__38__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__39__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__39__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__39__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__40__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__40__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__40__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__41__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__41__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__41__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__42__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__42__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__42__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__43__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__43__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__43__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__44__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__44__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__45__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__45__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__45__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__46__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__46__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__47__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__47__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__47__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__52__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__52__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__52__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__53__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__53__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__53__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__56__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__56__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__56__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__57__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__57__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__57__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__60__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__60__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__60__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__61__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__61__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__61__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__68__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__68__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__68__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__68__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__68__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__68__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__69__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__69__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__69__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__70__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__70__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__70__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__71__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__71__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__71__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__72__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__72__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__72__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__73__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__73__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__73__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__74__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__74__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__74__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__74__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__74__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__74__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__75__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__75__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__75__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__76__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__76__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__76__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__77__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__77__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__77__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__78__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__78__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__78__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__79__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__79__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__79__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__90__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__92__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__93__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__93__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__93__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__94__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__94__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__94__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__96__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__96__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__97__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__97__d;
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
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                    >> 2U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 2U))) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                    ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       >> 2U))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma10_prd2 
        = ((0xcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    << 2U)) | (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x 
        = ((0xf0U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x)) 
           | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                      ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x 
        = ((0xf0U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x)) 
           | (0xfU & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                      >> 4U)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x 
        = ((0xfU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x)) 
           | (0xf0U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                        ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                       << 4U)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x 
        = ((0xfU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x)) 
           | (0xf0U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                    >> 2U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 2U))) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                    ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       >> 2U))));
    vlSelf->out_req_o = ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)) 
                         & (4U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we 
        = ((0xcU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we)) 
           | ((((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)) 
                & (1U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))) 
               << 1U) | ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)) 
                         & (0U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we 
        = ((3U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we)) 
           | ((((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)) 
                & (3U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))) 
               << 3U) | (((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)) 
                          & (2U == (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))) 
                         << 2U)));
    vlSelf->__Vfunc_aes_mvm__2__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__2__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__2__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                 [0U][0U]);
    __Vfunc_aes_mvm__2__vec_c = 0U;
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__2__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__2__vec_b)))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__2__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__2__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__2__Vfuncout = __Vfunc_aes_mvm__2__vec_c;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1__vec_b = (0xffU & (0x63U ^ vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][0U]));
    __Vfunc_aes_mvm__1__vec_c = 0U;
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__1__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__1__vec_b)))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__1__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__1__Vfuncout = __Vfunc_aes_mvm__1__vec_c;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__0__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__0__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                 [0U][0U]);
    __Vfunc_aes_mvm__0__vec_c = 0U;
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__0__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__0__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__0__vec_b)))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__0__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__0__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__0__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__0__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__0__Vfuncout = __Vfunc_aes_mvm__0__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__0__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__2__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__5__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__5__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__5__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                 [1U][0U]);
    __Vfunc_aes_mvm__5__vec_c = 0U;
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__5__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__5__vec_b)))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__5__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__5__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__5__Vfuncout = __Vfunc_aes_mvm__5__vec_c;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__4__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__4__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                 [1U][0U]);
    __Vfunc_aes_mvm__4__vec_c = 0U;
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__4__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__4__vec_b)))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__4__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__4__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__4__Vfuncout = __Vfunc_aes_mvm__4__vec_c;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__3__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__3__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                 [1U][0U]);
    __Vfunc_aes_mvm__3__vec_c = 0U;
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__3__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__3__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__3__vec_b)))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__3__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__3__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__3__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__3__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__3__Vfuncout = __Vfunc_aes_mvm__3__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__3__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__4__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__5__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__32__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                >> 4U));
    __Vfunc_aes_mul_gf2p4__32__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                >> 0xcU));
    __Vfunc_aes_mul_gf2p2__33__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__32__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__33__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__32__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__33__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__33__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__33__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__33__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__33__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__33__d)));
    __Vfunc_aes_mul_gf2p2__33__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__33__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__33__d)));
    __Vfunc_aes_mul_gf2p2__33__f = ((((IData)(__Vfunc_aes_mul_gf2p2__33__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__33__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__33__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__33__b)));
    __Vfunc_aes_mul_gf2p2__33__Vfuncout = __Vfunc_aes_mul_gf2p2__33__f;
    __Vfunc_aes_mul_gf2p4__32__a = __Vfunc_aes_mul_gf2p2__33__Vfuncout;
    __Vfunc_aes_mul_gf2p2__34__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__32__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__32__delta)));
    __Vfunc_aes_mul_gf2p2__34__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__32__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__32__gamma)));
    __Vfunc_aes_mul_gf2p2__34__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__34__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__34__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__34__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__34__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__34__d)));
    __Vfunc_aes_mul_gf2p2__34__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__34__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__34__d)));
    __Vfunc_aes_mul_gf2p2__34__f = ((((IData)(__Vfunc_aes_mul_gf2p2__34__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__34__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__34__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__34__b)));
    __Vfunc_aes_mul_gf2p2__34__Vfuncout = __Vfunc_aes_mul_gf2p2__34__f;
    __Vfunc_aes_mul_gf2p4__32__b = __Vfunc_aes_mul_gf2p2__34__Vfuncout;
    __Vfunc_aes_mul_gf2p2__35__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__32__delta));
    __Vfunc_aes_mul_gf2p2__35__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__32__gamma));
    __Vfunc_aes_mul_gf2p2__35__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__35__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__35__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__35__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__35__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__35__d)));
    __Vfunc_aes_mul_gf2p2__35__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__35__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__35__d)));
    __Vfunc_aes_mul_gf2p2__35__f = ((((IData)(__Vfunc_aes_mul_gf2p2__35__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__35__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__35__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__35__b)));
    __Vfunc_aes_mul_gf2p2__35__Vfuncout = __Vfunc_aes_mul_gf2p2__35__f;
    __Vfunc_aes_mul_gf2p4__32__c = __Vfunc_aes_mul_gf2p2__35__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__36__g = __Vfunc_aes_mul_gf2p4__32__b;
    __Vfunc_aes_scale_omega2_gf2p2__36__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__36__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__36__g)));
    __Vfunc_aes_scale_omega2_gf2p2__36__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__36__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__32__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__32__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__32__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__36__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__37__g = __Vfunc_aes_mul_gf2p4__32__b;
    __Vfunc_aes_scale_omega2_gf2p2__37__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__37__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__37__g)));
    __Vfunc_aes_scale_omega2_gf2p2__37__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__37__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__32__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__32__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__32__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__37__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__32__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__32__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__32__Vfuncout;
    __Vfunc_aes_mul_gf2p4__38__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__38__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                >> 4U));
    __Vfunc_aes_mul_gf2p2__39__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__38__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__39__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__38__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__39__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__39__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__39__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__39__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__39__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__39__d)));
    __Vfunc_aes_mul_gf2p2__39__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__39__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__39__d)));
    __Vfunc_aes_mul_gf2p2__39__f = ((((IData)(__Vfunc_aes_mul_gf2p2__39__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__39__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__39__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__39__b)));
    __Vfunc_aes_mul_gf2p2__39__Vfuncout = __Vfunc_aes_mul_gf2p2__39__f;
    __Vfunc_aes_mul_gf2p4__38__a = __Vfunc_aes_mul_gf2p2__39__Vfuncout;
    __Vfunc_aes_mul_gf2p2__40__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__38__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__38__delta)));
    __Vfunc_aes_mul_gf2p2__40__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__38__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__38__gamma)));
    __Vfunc_aes_mul_gf2p2__40__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__40__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__40__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__40__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__40__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__40__d)));
    __Vfunc_aes_mul_gf2p2__40__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__40__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__40__d)));
    __Vfunc_aes_mul_gf2p2__40__f = ((((IData)(__Vfunc_aes_mul_gf2p2__40__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__40__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__40__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__40__b)));
    __Vfunc_aes_mul_gf2p2__40__Vfuncout = __Vfunc_aes_mul_gf2p2__40__f;
    __Vfunc_aes_mul_gf2p4__38__b = __Vfunc_aes_mul_gf2p2__40__Vfuncout;
    __Vfunc_aes_mul_gf2p2__41__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__38__delta));
    __Vfunc_aes_mul_gf2p2__41__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__38__gamma));
    __Vfunc_aes_mul_gf2p2__41__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__41__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__41__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__41__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__41__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__41__d)));
    __Vfunc_aes_mul_gf2p2__41__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__41__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__41__d)));
    __Vfunc_aes_mul_gf2p2__41__f = ((((IData)(__Vfunc_aes_mul_gf2p2__41__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__41__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__41__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__41__b)));
    __Vfunc_aes_mul_gf2p2__41__Vfuncout = __Vfunc_aes_mul_gf2p2__41__f;
    __Vfunc_aes_mul_gf2p4__38__c = __Vfunc_aes_mul_gf2p2__41__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__42__g = __Vfunc_aes_mul_gf2p4__38__b;
    __Vfunc_aes_scale_omega2_gf2p2__42__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__42__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__42__g)));
    __Vfunc_aes_scale_omega2_gf2p2__42__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__42__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__38__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__38__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__38__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__42__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__43__g = __Vfunc_aes_mul_gf2p4__38__b;
    __Vfunc_aes_scale_omega2_gf2p2__43__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__43__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__43__g)));
    __Vfunc_aes_scale_omega2_gf2p2__43__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__43__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__38__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__38__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__38__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__43__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__38__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__38__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__38__Vfuncout;
    __Vfunc_aes_mul_gf2p2__56__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__56__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                          >> 6U));
    __Vfunc_aes_mul_gf2p2__56__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__56__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__56__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__56__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__56__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__56__d)));
    __Vfunc_aes_mul_gf2p2__56__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__56__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__56__d)));
    __Vfunc_aes_mul_gf2p2__56__f = ((((IData)(__Vfunc_aes_mul_gf2p2__56__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__56__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__56__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__56__b)));
    __Vfunc_aes_mul_gf2p2__56__Vfuncout = __Vfunc_aes_mul_gf2p2__56__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__56__Vfuncout;
    __Vfunc_aes_mul_gf2p2__57__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__57__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__57__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__57__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__57__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__57__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__57__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__57__d)));
    __Vfunc_aes_mul_gf2p2__57__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__57__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__57__d)));
    __Vfunc_aes_mul_gf2p2__57__f = ((((IData)(__Vfunc_aes_mul_gf2p2__57__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__57__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__57__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__57__b)));
    __Vfunc_aes_mul_gf2p2__57__Vfuncout = __Vfunc_aes_mul_gf2p2__57__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__57__Vfuncout;
    __Vfunc_aes_mul_gf2p2__60__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__60__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__60__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__60__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__60__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__60__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__60__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__60__d)));
    __Vfunc_aes_mul_gf2p2__60__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__60__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__60__d)));
    __Vfunc_aes_mul_gf2p2__60__f = ((((IData)(__Vfunc_aes_mul_gf2p2__60__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__60__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__60__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__60__b)));
    __Vfunc_aes_mul_gf2p2__60__Vfuncout = __Vfunc_aes_mul_gf2p2__60__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__60__Vfuncout;
    __Vfunc_aes_mul_gf2p2__61__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__61__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__61__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__61__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__61__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__61__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__61__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__61__d)));
    __Vfunc_aes_mul_gf2p2__61__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__61__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__61__d)));
    __Vfunc_aes_mul_gf2p2__61__f = ((((IData)(__Vfunc_aes_mul_gf2p2__61__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__61__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__61__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__61__b)));
    __Vfunc_aes_mul_gf2p2__61__Vfuncout = __Vfunc_aes_mul_gf2p2__61__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__61__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__11__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__11__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__11__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__11__vec_c = 0U;
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (IData)((((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                              >> 7U) 
                                             & vlSelf->__Vfunc_aes_mvm__11__mat_a
                                             [0U])));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [1U] 
                                              & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                 >> 6U)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [2U] 
                                              & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                 >> 5U)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [3U] 
                                              & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                 >> 4U)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [4U] 
                                              & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                 >> 3U)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [5U] 
                                              & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                 >> 2U)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [6U] 
                                              & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                 >> 1U)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [7U] 
                                              & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x3fffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [0U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 6U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x7fffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [1U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 5U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [2U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x1ffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [3U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x3ffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [4U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x7ffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [5U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [6U] 
                                              & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xfffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [7U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x7fffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [0U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 5U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [1U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x1ffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [2U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x3ffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [3U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x7ffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [4U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [5U] 
                                              & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xfffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [6U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xfffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [7U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    << 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [0U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x1ffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [1U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x3ffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [2U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0x7ffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [3U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    >> 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                              [4U] 
                                              & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xfffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [5U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xfffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [6U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    << 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                           ^ (0xfffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [7U] 
                                                 & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                    << 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0x1ffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [0U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       >> 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0x3ffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [1U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       >> 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0x7ffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [2U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       >> 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [3U] 
                                                 & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0x3fffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [0U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       >> 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0x7fffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [1U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       >> 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [2U] 
                                                 & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [3U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 5U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0x7fffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [0U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       >> 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [1U] 
                                                 & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [2U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [3U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 5U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 6U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((IData)(__Vfunc_aes_mvm__11__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                 [0U] 
                                                 & (IData)(__Vfunc_aes_mvm__11__vec_b)))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [1U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [2U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [3U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 5U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 6U))))));
    __Vfunc_aes_mvm__11__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__11__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__11__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__11__vec_b) 
                                                       << 7U))))));
    __Vfunc_aes_mvm__11__Vfuncout = __Vfunc_aes_mvm__11__vec_c;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__10__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__10__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__10__vec_c = 0U;
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (IData)((((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                              >> 7U) 
                                             & vlSelf->__Vfunc_aes_mvm__10__mat_a
                                             [0U])));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [1U] 
                                              & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                 >> 6U)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [2U] 
                                              & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                 >> 5U)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [3U] 
                                              & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                 >> 4U)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [4U] 
                                              & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                 >> 3U)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [5U] 
                                              & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                 >> 2U)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [6U] 
                                              & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                 >> 1U)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (1U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [7U] 
                                              & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x3fffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [0U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 6U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x7fffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [1U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 5U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [2U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x1ffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [3U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x3ffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [4U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x7ffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [5U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [6U] 
                                              & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (2U & ((0xfffffffeU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xfffffffeU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [7U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x7fffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [0U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 5U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [1U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x1ffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [2U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x3ffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [3U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x7ffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [4U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [5U] 
                                              & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xfffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [6U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (4U & ((0xfffffffcU 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xfffffffcU 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [7U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    << 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [0U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x1ffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [1U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x3ffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [2U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0x7ffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [3U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    >> 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                           ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                              [4U] 
                                              & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xfffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [5U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xfffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [6U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    << 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (8U & ((0xfffffff8U 
                                            & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                           ^ (0xfffffff8U 
                                              & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [7U] 
                                                 & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                    << 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0x1ffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [0U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       >> 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0x3ffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [1U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       >> 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0x7ffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [2U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       >> 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [3U] 
                                                 & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xfffffff0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0x3fffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [0U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       >> 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0x7fffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [1U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       >> 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [2U] 
                                                 & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [3U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x20U & ((0xffffffe0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 5U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0x7fffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [0U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       >> 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [1U] 
                                                 & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [2U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [3U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 5U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x40U & ((0xffffffc0U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffffc0U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 6U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((IData)(__Vfunc_aes_mvm__10__vec_c) 
                                              ^ (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                 [0U] 
                                                 & (IData)(__Vfunc_aes_mvm__10__vec_b)))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [1U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 1U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [2U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 2U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [3U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 3U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [4U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 4U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [5U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 5U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [6U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 6U))))));
    __Vfunc_aes_mvm__10__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                  | (0x80U & ((0xffffff80U 
                                               & (IData)(__Vfunc_aes_mvm__10__vec_c)) 
                                              ^ (0xffffff80U 
                                                 & (vlSelf->__Vfunc_aes_mvm__10__mat_a
                                                    [7U] 
                                                    & ((IData)(__Vfunc_aes_mvm__10__vec_b) 
                                                       << 7U))))));
    __Vfunc_aes_mvm__10__Vfuncout = __Vfunc_aes_mvm__10__vec_c;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__9__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__9__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__9__vec_c = 0U;
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__9__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__9__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__9__vec_b)))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__9__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__9__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__9__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__9__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__9__Vfuncout = __Vfunc_aes_mvm__9__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__9__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__10__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__11__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__8__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__8__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__8__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__8__vec_c = 0U;
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__8__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__8__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__8__vec_b)))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__8__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__8__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__8__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__8__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__8__Vfuncout = __Vfunc_aes_mvm__8__vec_c;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__7__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__7__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__7__vec_c = 0U;
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__7__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__7__vec_b)))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__7__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__7__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__7__Vfuncout = __Vfunc_aes_mvm__7__vec_c;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__6__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__6__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__6__vec_c = 0U;
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (IData)((((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                             >> 7U) 
                                            & vlSelf->__Vfunc_aes_mvm__6__mat_a
                                            [0U])));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [1U] & 
                                             ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                              >> 6U)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [2U] & 
                                             ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                              >> 5U)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [3U] & 
                                             ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                              >> 4U)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [4U] & 
                                             ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                              >> 3U)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [5U] & 
                                             ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                              >> 2U)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [6U] & 
                                             ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                              >> 1U)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (1U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [7U] & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x3fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 6U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x7fffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x1ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x3ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x7ffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [6U] & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (2U & ((0xfffffffeU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xfffffffeU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x7fffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 5U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x1ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x3ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x7ffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [5U] & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (4U & ((0xfffffffcU 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xfffffffcU 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [0U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x1ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x3ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0x7ffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   >> 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                          ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                             [4U] & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   << 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (8U & ((0xfffffff8U 
                                           & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                          ^ (0xfffffff8U 
                                             & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [7U] 
                                                & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                   << 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [3U] 
                                                & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x10U & ((0xfffffff0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [2U] 
                                                & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x20U & ((0xffffffe0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [1U] 
                                                & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x40U & ((0xffffffc0U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((IData)(__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                [0U] 
                                                & (IData)(__Vfunc_aes_mvm__6__vec_b)))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 5U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 6U))))));
    __Vfunc_aes_mvm__6__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                 | (0x80U & ((0xffffff80U 
                                              & (IData)(__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelf->__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__6__vec_b) 
                                                      << 7U))))));
    __Vfunc_aes_mvm__6__Vfuncout = __Vfunc_aes_mvm__6__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__6__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__7__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__8__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__52__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__52__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                          >> 6U));
    __Vfunc_aes_mul_gf2p2__52__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__52__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__52__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__52__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__52__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__52__d)));
    __Vfunc_aes_mul_gf2p2__52__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__52__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__52__d)));
    __Vfunc_aes_mul_gf2p2__52__f = ((((IData)(__Vfunc_aes_mul_gf2p2__52__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__52__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__52__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__52__b)));
    __Vfunc_aes_mul_gf2p2__52__Vfuncout = __Vfunc_aes_mul_gf2p2__52__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__52__Vfuncout;
    __Vfunc_aes_mul_gf2p2__53__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__53__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__53__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__53__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__53__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__53__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__53__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__53__d)));
    __Vfunc_aes_mul_gf2p2__53__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__53__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__53__d)));
    __Vfunc_aes_mul_gf2p2__53__f = ((((IData)(__Vfunc_aes_mul_gf2p2__53__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__53__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__53__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__53__b)));
    __Vfunc_aes_mul_gf2p2__53__Vfuncout = __Vfunc_aes_mul_gf2p2__53__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__53__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a = (3U 
                                                   & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma) 
                                                       >> 2U) 
                                                      ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma)));
    __Vfunc_aes_square_gf2p2__13__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma));
    __Vfunc_aes_square_gf2p2__13__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__13__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__13__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__13__Vfuncout = __Vfunc_aes_square_gf2p2__13__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b = __Vfunc_aes_square_gf2p2__13__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__15__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b;
    __Vfunc_aes_scale_omega_gf2p2__15__d = ((2U & (
                                                   VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__15__g) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(__Vfunc_aes_scale_omega_gf2p2__15__g) 
                                                >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__15__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__15__d;
    __Vfunc_aes_square_gf2p2__14__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a;
    __Vfunc_aes_square_gf2p2__14__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__14__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__14__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__14__Vfuncout = __Vfunc_aes_square_gf2p2__14__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__14__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__15__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a = (3U 
                                                   & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma) 
                                                       >> 2U) 
                                                      ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma)));
    __Vfunc_aes_square_gf2p2__17__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma));
    __Vfunc_aes_square_gf2p2__17__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__17__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__17__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__17__Vfuncout = __Vfunc_aes_square_gf2p2__17__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b = __Vfunc_aes_square_gf2p2__17__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__19__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b;
    __Vfunc_aes_scale_omega_gf2p2__19__d = ((2U & (
                                                   VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__19__g) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(__Vfunc_aes_scale_omega_gf2p2__19__g) 
                                                >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__19__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__19__d;
    __Vfunc_aes_square_gf2p2__18__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a;
    __Vfunc_aes_square_gf2p2__18__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__18__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__18__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__18__Vfuncout = __Vfunc_aes_square_gf2p2__18__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__18__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__19__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
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
    __Vfunc_aes_square_gf2p2__45__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                              >> 6U) 
                                             ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 4U)));
    __Vfunc_aes_square_gf2p2__45__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__45__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__45__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__45__Vfuncout = __Vfunc_aes_square_gf2p2__45__d;
    __Vfunc_aes_scale_omega2_gf2p2__44__g = __Vfunc_aes_square_gf2p2__45__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__44__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__44__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__44__g)));
    __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__44__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout;
    __Vfunc_aes_square_gf2p2__47__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                              >> 2U) 
                                             ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__47__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__47__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__47__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__47__Vfuncout = __Vfunc_aes_square_gf2p2__47__d;
    __Vfunc_aes_scale_omega2_gf2p2__46__g = __Vfunc_aes_square_gf2p2__47__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__46__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__46__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__46__g)));
    __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__46__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout;
    __Vfunc_aes_mul_gf2p4__68__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__68__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                >> 4U));
    __Vfunc_aes_mul_gf2p2__69__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__68__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__69__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__68__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__69__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__69__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__69__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__69__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__69__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__69__d)));
    __Vfunc_aes_mul_gf2p2__69__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__69__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__69__d)));
    __Vfunc_aes_mul_gf2p2__69__f = ((((IData)(__Vfunc_aes_mul_gf2p2__69__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__69__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__69__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__69__b)));
    __Vfunc_aes_mul_gf2p2__69__Vfuncout = __Vfunc_aes_mul_gf2p2__69__f;
    __Vfunc_aes_mul_gf2p4__68__a = __Vfunc_aes_mul_gf2p2__69__Vfuncout;
    __Vfunc_aes_mul_gf2p2__70__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__68__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__68__delta)));
    __Vfunc_aes_mul_gf2p2__70__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__68__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__68__gamma)));
    __Vfunc_aes_mul_gf2p2__70__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__70__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__70__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__70__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__70__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__70__d)));
    __Vfunc_aes_mul_gf2p2__70__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__70__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__70__d)));
    __Vfunc_aes_mul_gf2p2__70__f = ((((IData)(__Vfunc_aes_mul_gf2p2__70__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__70__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__70__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__70__b)));
    __Vfunc_aes_mul_gf2p2__70__Vfuncout = __Vfunc_aes_mul_gf2p2__70__f;
    __Vfunc_aes_mul_gf2p4__68__b = __Vfunc_aes_mul_gf2p2__70__Vfuncout;
    __Vfunc_aes_mul_gf2p2__71__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__68__delta));
    __Vfunc_aes_mul_gf2p2__71__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__68__gamma));
    __Vfunc_aes_mul_gf2p2__71__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__71__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__71__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__71__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__71__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__71__d)));
    __Vfunc_aes_mul_gf2p2__71__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__71__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__71__d)));
    __Vfunc_aes_mul_gf2p2__71__f = ((((IData)(__Vfunc_aes_mul_gf2p2__71__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__71__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__71__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__71__b)));
    __Vfunc_aes_mul_gf2p2__71__Vfuncout = __Vfunc_aes_mul_gf2p2__71__f;
    __Vfunc_aes_mul_gf2p4__68__c = __Vfunc_aes_mul_gf2p2__71__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__72__g = __Vfunc_aes_mul_gf2p4__68__b;
    __Vfunc_aes_scale_omega2_gf2p2__72__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__72__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__72__g)));
    __Vfunc_aes_scale_omega2_gf2p2__72__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__72__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__68__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__68__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__68__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__72__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__73__g = __Vfunc_aes_mul_gf2p4__68__b;
    __Vfunc_aes_scale_omega2_gf2p2__73__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__73__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__73__g)));
    __Vfunc_aes_scale_omega2_gf2p2__73__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__73__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__68__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__68__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__68__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__73__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__68__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__68__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__68__Vfuncout;
    __Vfunc_aes_mul_gf2p4__74__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__74__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                >> 0xcU));
    __Vfunc_aes_mul_gf2p2__75__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__74__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__75__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__74__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__75__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__75__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__75__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__75__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__75__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__75__d)));
    __Vfunc_aes_mul_gf2p2__75__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__75__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__75__d)));
    __Vfunc_aes_mul_gf2p2__75__f = ((((IData)(__Vfunc_aes_mul_gf2p2__75__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__75__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__75__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__75__b)));
    __Vfunc_aes_mul_gf2p2__75__Vfuncout = __Vfunc_aes_mul_gf2p2__75__f;
    __Vfunc_aes_mul_gf2p4__74__a = __Vfunc_aes_mul_gf2p2__75__Vfuncout;
    __Vfunc_aes_mul_gf2p2__76__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__74__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__74__delta)));
    __Vfunc_aes_mul_gf2p2__76__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__74__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__74__gamma)));
    __Vfunc_aes_mul_gf2p2__76__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__76__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__76__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__76__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__76__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__76__d)));
    __Vfunc_aes_mul_gf2p2__76__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__76__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__76__d)));
    __Vfunc_aes_mul_gf2p2__76__f = ((((IData)(__Vfunc_aes_mul_gf2p2__76__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__76__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__76__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__76__b)));
    __Vfunc_aes_mul_gf2p2__76__Vfuncout = __Vfunc_aes_mul_gf2p2__76__f;
    __Vfunc_aes_mul_gf2p4__74__b = __Vfunc_aes_mul_gf2p2__76__Vfuncout;
    __Vfunc_aes_mul_gf2p2__77__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__74__delta));
    __Vfunc_aes_mul_gf2p2__77__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__74__gamma));
    __Vfunc_aes_mul_gf2p2__77__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__77__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__77__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__77__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__77__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__77__d)));
    __Vfunc_aes_mul_gf2p2__77__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__77__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__77__d)));
    __Vfunc_aes_mul_gf2p2__77__f = ((((IData)(__Vfunc_aes_mul_gf2p2__77__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__77__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__77__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__77__b)));
    __Vfunc_aes_mul_gf2p2__77__Vfuncout = __Vfunc_aes_mul_gf2p2__77__f;
    __Vfunc_aes_mul_gf2p4__74__c = __Vfunc_aes_mul_gf2p2__77__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__78__g = __Vfunc_aes_mul_gf2p4__74__b;
    __Vfunc_aes_scale_omega2_gf2p2__78__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__78__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__78__g)));
    __Vfunc_aes_scale_omega2_gf2p2__78__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__78__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__74__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__74__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__74__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__78__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__79__g = __Vfunc_aes_mul_gf2p4__74__b;
    __Vfunc_aes_scale_omega2_gf2p2__79__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__79__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__79__g)));
    __Vfunc_aes_scale_omega2_gf2p2__79__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__79__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__74__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__74__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__74__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__79__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__74__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__74__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__74__Vfuncout;
    __Vfunc_aes_mul_gf2p4__92__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__92__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__93__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__92__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__93__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__92__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__93__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__93__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__93__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__93__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__93__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__93__d)));
    __Vfunc_aes_mul_gf2p2__93__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__93__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__93__d)));
    __Vfunc_aes_mul_gf2p2__93__f = ((((IData)(__Vfunc_aes_mul_gf2p2__93__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__93__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__93__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__93__b)));
    __Vfunc_aes_mul_gf2p2__93__Vfuncout = __Vfunc_aes_mul_gf2p2__93__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__92__a = __Vfunc_aes_mul_gf2p2__93__Vfuncout;
    __Vfunc_aes_mul_gf2p2__94__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__92__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__92__delta)));
    __Vfunc_aes_mul_gf2p2__94__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__92__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__92__gamma)));
    __Vfunc_aes_mul_gf2p2__94__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__94__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__94__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__94__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__94__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__94__d)));
    __Vfunc_aes_mul_gf2p2__94__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__94__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__94__d)));
    __Vfunc_aes_mul_gf2p2__94__f = ((((IData)(__Vfunc_aes_mul_gf2p2__94__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__94__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__94__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__94__b)));
    __Vfunc_aes_mul_gf2p2__94__Vfuncout = __Vfunc_aes_mul_gf2p2__94__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__92__b = __Vfunc_aes_mul_gf2p2__94__Vfuncout;
    __Vfunc_aes_mul_gf2p2__95__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__92__delta));
    __Vfunc_aes_mul_gf2p2__95__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__92__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__95__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__95__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__95__d)) 
                                                  >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__95__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__95__g) 
                                                  & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__95__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__95__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__95__g) 
                                                  & (IData)(__Vfunc_aes_mul_gf2p2__95__d)));
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
}
