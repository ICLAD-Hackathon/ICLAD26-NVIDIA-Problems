// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__7(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__7\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__330__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__330__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__330__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__331__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__331__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__331__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__332__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__332__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__332__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__333__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__333__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__333__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__334__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__334__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__334__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__335__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__335__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__335__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__336__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__336__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__336__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__337__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__337__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__337__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__338__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__338__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__338__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__339__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__339__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__339__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__340__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__340__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__340__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__341__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__341__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__341__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__344__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__344__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__344__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__345__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__345__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__345__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__348__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__348__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__348__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__349__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__349__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__349__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__366__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__366__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__367__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__367__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__372__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__372__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__373__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__373__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__378__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__379__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__402__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__402__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__403__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__403__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__408__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__408__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__409__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__409__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__420__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__422__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__426__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__426__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__427__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__427__d;
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
    vlSelf->__Vfunc_aes_mvm__332__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__332__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][3U]);
    __Vfunc_aes_mvm__332__vec_c = 0U;
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__332__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__332__Vfuncout = __Vfunc_aes_mvm__332__vec_c;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__331__vec_b = (0xffU & (0x63U ^ 
                                            vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][3U]));
    __Vfunc_aes_mvm__331__vec_c = 0U;
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__331__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__331__Vfuncout = __Vfunc_aes_mvm__331__vec_c;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__330__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][3U]);
    __Vfunc_aes_mvm__330__vec_c = 0U;
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__330__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__330__Vfuncout = __Vfunc_aes_mvm__330__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__330__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__331__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__332__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__335__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__335__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][3U]);
    __Vfunc_aes_mvm__335__vec_c = 0U;
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__335__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__335__Vfuncout = __Vfunc_aes_mvm__335__vec_c;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__334__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][3U]);
    __Vfunc_aes_mvm__334__vec_c = 0U;
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__334__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__334__Vfuncout = __Vfunc_aes_mvm__334__vec_c;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__333__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][3U]);
    __Vfunc_aes_mvm__333__vec_c = 0U;
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__333__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__333__Vfuncout = __Vfunc_aes_mvm__333__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__333__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__334__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__335__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__362__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__362__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__363__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__362__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__363__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__362__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__363__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__363__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__363__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__363__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__363__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__363__d)));
    __Vfunc_aes_mul_gf2p2__363__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__363__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__363__d)));
    __Vfunc_aes_mul_gf2p2__363__f = ((((IData)(__Vfunc_aes_mul_gf2p2__363__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__363__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__363__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__363__b)));
    __Vfunc_aes_mul_gf2p2__363__Vfuncout = __Vfunc_aes_mul_gf2p2__363__f;
    __Vfunc_aes_mul_gf2p4__362__a = __Vfunc_aes_mul_gf2p2__363__Vfuncout;
    __Vfunc_aes_mul_gf2p2__364__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__362__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__362__delta)));
    __Vfunc_aes_mul_gf2p2__364__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__362__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__362__gamma)));
    __Vfunc_aes_mul_gf2p2__364__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__364__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__364__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__364__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__364__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__364__d)));
    __Vfunc_aes_mul_gf2p2__364__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__364__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__364__d)));
    __Vfunc_aes_mul_gf2p2__364__f = ((((IData)(__Vfunc_aes_mul_gf2p2__364__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__364__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__364__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__364__b)));
    __Vfunc_aes_mul_gf2p2__364__Vfuncout = __Vfunc_aes_mul_gf2p2__364__f;
    __Vfunc_aes_mul_gf2p4__362__b = __Vfunc_aes_mul_gf2p2__364__Vfuncout;
    __Vfunc_aes_mul_gf2p2__365__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__362__delta));
    __Vfunc_aes_mul_gf2p2__365__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__362__gamma));
    __Vfunc_aes_mul_gf2p2__365__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__365__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__365__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__365__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__365__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__365__d)));
    __Vfunc_aes_mul_gf2p2__365__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__365__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__365__d)));
    __Vfunc_aes_mul_gf2p2__365__f = ((((IData)(__Vfunc_aes_mul_gf2p2__365__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__365__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__365__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__365__b)));
    __Vfunc_aes_mul_gf2p2__365__Vfuncout = __Vfunc_aes_mul_gf2p2__365__f;
    __Vfunc_aes_mul_gf2p4__362__c = __Vfunc_aes_mul_gf2p2__365__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__366__g = __Vfunc_aes_mul_gf2p4__362__b;
    __Vfunc_aes_scale_omega2_gf2p2__366__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__366__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__366__g)));
    __Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__366__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__362__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__362__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__367__g = __Vfunc_aes_mul_gf2p4__362__b;
    __Vfunc_aes_scale_omega2_gf2p2__367__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__367__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__367__g)));
    __Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__367__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__362__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__362__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__362__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__362__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__362__Vfuncout;
    __Vfunc_aes_mul_gf2p4__368__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__368__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__369__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__368__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__369__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__368__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__369__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__369__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__369__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__369__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__369__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__369__d)));
    __Vfunc_aes_mul_gf2p2__369__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__369__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__369__d)));
    __Vfunc_aes_mul_gf2p2__369__f = ((((IData)(__Vfunc_aes_mul_gf2p2__369__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__369__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__369__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__369__b)));
    __Vfunc_aes_mul_gf2p2__369__Vfuncout = __Vfunc_aes_mul_gf2p2__369__f;
    __Vfunc_aes_mul_gf2p4__368__a = __Vfunc_aes_mul_gf2p2__369__Vfuncout;
    __Vfunc_aes_mul_gf2p2__370__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__368__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__368__delta)));
    __Vfunc_aes_mul_gf2p2__370__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__368__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__368__gamma)));
    __Vfunc_aes_mul_gf2p2__370__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__370__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__370__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__370__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__370__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__370__d)));
    __Vfunc_aes_mul_gf2p2__370__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__370__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__370__d)));
    __Vfunc_aes_mul_gf2p2__370__f = ((((IData)(__Vfunc_aes_mul_gf2p2__370__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__370__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__370__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__370__b)));
    __Vfunc_aes_mul_gf2p2__370__Vfuncout = __Vfunc_aes_mul_gf2p2__370__f;
    __Vfunc_aes_mul_gf2p4__368__b = __Vfunc_aes_mul_gf2p2__370__Vfuncout;
    __Vfunc_aes_mul_gf2p2__371__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__368__delta));
    __Vfunc_aes_mul_gf2p2__371__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__368__gamma));
    __Vfunc_aes_mul_gf2p2__371__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__371__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__371__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__371__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__371__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__371__d)));
    __Vfunc_aes_mul_gf2p2__371__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__371__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__371__d)));
    __Vfunc_aes_mul_gf2p2__371__f = ((((IData)(__Vfunc_aes_mul_gf2p2__371__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__371__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__371__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__371__b)));
    __Vfunc_aes_mul_gf2p2__371__Vfuncout = __Vfunc_aes_mul_gf2p2__371__f;
    __Vfunc_aes_mul_gf2p4__368__c = __Vfunc_aes_mul_gf2p2__371__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__372__g = __Vfunc_aes_mul_gf2p4__368__b;
    __Vfunc_aes_scale_omega2_gf2p2__372__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__372__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__372__g)));
    __Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__372__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__368__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__368__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__373__g = __Vfunc_aes_mul_gf2p4__368__b;
    __Vfunc_aes_scale_omega2_gf2p2__373__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__373__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__373__g)));
    __Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__373__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__368__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__368__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__368__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__368__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__368__Vfuncout;
    __Vfunc_aes_mul_gf2p2__386__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__386__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__386__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__386__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__386__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__386__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__386__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__386__d)));
    __Vfunc_aes_mul_gf2p2__386__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__386__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__386__d)));
    __Vfunc_aes_mul_gf2p2__386__f = ((((IData)(__Vfunc_aes_mul_gf2p2__386__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__386__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__386__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__386__b)));
    __Vfunc_aes_mul_gf2p2__386__Vfuncout = __Vfunc_aes_mul_gf2p2__386__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__386__Vfuncout;
    __Vfunc_aes_mul_gf2p2__387__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__387__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__387__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__387__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__387__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__387__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__387__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__387__d)));
    __Vfunc_aes_mul_gf2p2__387__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__387__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__387__d)));
    __Vfunc_aes_mul_gf2p2__387__f = ((((IData)(__Vfunc_aes_mul_gf2p2__387__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__387__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__387__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__387__b)));
    __Vfunc_aes_mul_gf2p2__387__Vfuncout = __Vfunc_aes_mul_gf2p2__387__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__387__Vfuncout;
    __Vfunc_aes_mul_gf2p2__390__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__390__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__390__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__390__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__390__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__390__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__390__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__390__d)));
    __Vfunc_aes_mul_gf2p2__390__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__390__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__390__d)));
    __Vfunc_aes_mul_gf2p2__390__f = ((((IData)(__Vfunc_aes_mul_gf2p2__390__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__390__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__390__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__390__b)));
    __Vfunc_aes_mul_gf2p2__390__Vfuncout = __Vfunc_aes_mul_gf2p2__390__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__391__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__391__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__391__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__391__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__391__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__391__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__391__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__391__d)));
    __Vfunc_aes_mul_gf2p2__391__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__391__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__391__d)));
    __Vfunc_aes_mul_gf2p2__391__f = ((((IData)(__Vfunc_aes_mul_gf2p2__391__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__391__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__391__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__391__b)));
    __Vfunc_aes_mul_gf2p2__391__Vfuncout = __Vfunc_aes_mul_gf2p2__391__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__391__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__341__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__341__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__341__vec_c = 0U;
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__341__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__341__Vfuncout = __Vfunc_aes_mvm__341__vec_c;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__340__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__340__vec_c = 0U;
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__340__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__340__Vfuncout = __Vfunc_aes_mvm__340__vec_c;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__339__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__339__vec_c = 0U;
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__339__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__339__Vfuncout = __Vfunc_aes_mvm__339__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__339__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__340__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__341__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__338__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__338__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__338__vec_c = 0U;
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__338__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__338__Vfuncout = __Vfunc_aes_mvm__338__vec_c;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__337__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__337__vec_c = 0U;
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__337__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__337__Vfuncout = __Vfunc_aes_mvm__337__vec_c;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__336__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__336__vec_c = 0U;
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__336__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__336__Vfuncout = __Vfunc_aes_mvm__336__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__336__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__337__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__338__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__382__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__382__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__382__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__382__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__382__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__382__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__382__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__382__d)));
    __Vfunc_aes_mul_gf2p2__382__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__382__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__382__d)));
    __Vfunc_aes_mul_gf2p2__382__f = ((((IData)(__Vfunc_aes_mul_gf2p2__382__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__382__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__382__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__382__b)));
    __Vfunc_aes_mul_gf2p2__382__Vfuncout = __Vfunc_aes_mul_gf2p2__382__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__382__Vfuncout;
    __Vfunc_aes_mul_gf2p2__383__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__383__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__383__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__383__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__383__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__383__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__383__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__383__d)));
    __Vfunc_aes_mul_gf2p2__383__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__383__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__383__d)));
    __Vfunc_aes_mul_gf2p2__383__f = ((((IData)(__Vfunc_aes_mul_gf2p2__383__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__383__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__383__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__383__b)));
    __Vfunc_aes_mul_gf2p2__383__Vfuncout = __Vfunc_aes_mul_gf2p2__383__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__383__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma)));
    __Vfunc_aes_square_gf2p2__343__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma));
    __Vfunc_aes_square_gf2p2__343__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__343__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__343__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__343__Vfuncout = __Vfunc_aes_square_gf2p2__343__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b = __Vfunc_aes_square_gf2p2__343__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__345__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b;
    __Vfunc_aes_scale_omega_gf2p2__345__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__345__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__345__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__345__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__345__d;
    __Vfunc_aes_square_gf2p2__344__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a;
    __Vfunc_aes_square_gf2p2__344__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__344__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__344__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__344__Vfuncout = __Vfunc_aes_square_gf2p2__344__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__344__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__345__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma)));
    __Vfunc_aes_square_gf2p2__347__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma));
    __Vfunc_aes_square_gf2p2__347__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__347__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__347__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__347__Vfuncout = __Vfunc_aes_square_gf2p2__347__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b = __Vfunc_aes_square_gf2p2__347__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__349__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b;
    __Vfunc_aes_scale_omega_gf2p2__349__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__349__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__349__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__349__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__349__d;
    __Vfunc_aes_square_gf2p2__348__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a;
    __Vfunc_aes_square_gf2p2__348__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__348__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__348__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__348__Vfuncout = __Vfunc_aes_square_gf2p2__348__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__348__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__349__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__375__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__375__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__375__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__375__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__375__Vfuncout = __Vfunc_aes_square_gf2p2__375__d;
    __Vfunc_aes_scale_omega2_gf2p2__374__g = __Vfunc_aes_square_gf2p2__375__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__374__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__374__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__374__g)));
    __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__374__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout;
    __Vfunc_aes_square_gf2p2__377__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__377__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__377__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__377__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__377__Vfuncout = __Vfunc_aes_square_gf2p2__377__d;
    __Vfunc_aes_scale_omega2_gf2p2__376__g = __Vfunc_aes_square_gf2p2__377__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__376__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__376__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__376__g)));
    __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__376__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout;
    __Vfunc_aes_mul_gf2p4__398__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__398__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__399__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__398__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__399__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__398__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__399__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__399__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__399__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__399__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__399__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__399__d)));
    __Vfunc_aes_mul_gf2p2__399__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__399__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__399__d)));
    __Vfunc_aes_mul_gf2p2__399__f = ((((IData)(__Vfunc_aes_mul_gf2p2__399__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__399__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__399__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__399__b)));
    __Vfunc_aes_mul_gf2p2__399__Vfuncout = __Vfunc_aes_mul_gf2p2__399__f;
    __Vfunc_aes_mul_gf2p4__398__a = __Vfunc_aes_mul_gf2p2__399__Vfuncout;
    __Vfunc_aes_mul_gf2p2__400__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__398__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__398__delta)));
    __Vfunc_aes_mul_gf2p2__400__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__398__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__398__gamma)));
    __Vfunc_aes_mul_gf2p2__400__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__400__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__400__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__400__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__400__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__400__d)));
    __Vfunc_aes_mul_gf2p2__400__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__400__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__400__d)));
    __Vfunc_aes_mul_gf2p2__400__f = ((((IData)(__Vfunc_aes_mul_gf2p2__400__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__400__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__400__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__400__b)));
    __Vfunc_aes_mul_gf2p2__400__Vfuncout = __Vfunc_aes_mul_gf2p2__400__f;
    __Vfunc_aes_mul_gf2p4__398__b = __Vfunc_aes_mul_gf2p2__400__Vfuncout;
    __Vfunc_aes_mul_gf2p2__401__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__398__delta));
    __Vfunc_aes_mul_gf2p2__401__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__398__gamma));
    __Vfunc_aes_mul_gf2p2__401__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__401__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__401__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__401__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__401__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__401__d)));
    __Vfunc_aes_mul_gf2p2__401__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__401__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__401__d)));
    __Vfunc_aes_mul_gf2p2__401__f = ((((IData)(__Vfunc_aes_mul_gf2p2__401__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__401__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__401__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__401__b)));
    __Vfunc_aes_mul_gf2p2__401__Vfuncout = __Vfunc_aes_mul_gf2p2__401__f;
    __Vfunc_aes_mul_gf2p4__398__c = __Vfunc_aes_mul_gf2p2__401__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__402__g = __Vfunc_aes_mul_gf2p4__398__b;
    __Vfunc_aes_scale_omega2_gf2p2__402__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__402__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__402__g)));
    __Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__402__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__398__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__398__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__403__g = __Vfunc_aes_mul_gf2p4__398__b;
    __Vfunc_aes_scale_omega2_gf2p2__403__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__403__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__403__g)));
    __Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__403__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__398__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__398__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__398__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__398__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__398__Vfuncout;
    __Vfunc_aes_mul_gf2p4__404__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__404__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__405__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__404__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__405__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__404__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__405__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__405__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__405__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__405__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__405__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__405__d)));
    __Vfunc_aes_mul_gf2p2__405__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__405__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__405__d)));
    __Vfunc_aes_mul_gf2p2__405__f = ((((IData)(__Vfunc_aes_mul_gf2p2__405__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__405__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__405__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__405__b)));
    __Vfunc_aes_mul_gf2p2__405__Vfuncout = __Vfunc_aes_mul_gf2p2__405__f;
    __Vfunc_aes_mul_gf2p4__404__a = __Vfunc_aes_mul_gf2p2__405__Vfuncout;
    __Vfunc_aes_mul_gf2p2__406__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__404__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__404__delta)));
    __Vfunc_aes_mul_gf2p2__406__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__404__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__404__gamma)));
    __Vfunc_aes_mul_gf2p2__406__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__406__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__406__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__406__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__406__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__406__d)));
    __Vfunc_aes_mul_gf2p2__406__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__406__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__406__d)));
    __Vfunc_aes_mul_gf2p2__406__f = ((((IData)(__Vfunc_aes_mul_gf2p2__406__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__406__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__406__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__406__b)));
    __Vfunc_aes_mul_gf2p2__406__Vfuncout = __Vfunc_aes_mul_gf2p2__406__f;
    __Vfunc_aes_mul_gf2p4__404__b = __Vfunc_aes_mul_gf2p2__406__Vfuncout;
    __Vfunc_aes_mul_gf2p2__407__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__404__delta));
    __Vfunc_aes_mul_gf2p2__407__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__404__gamma));
    __Vfunc_aes_mul_gf2p2__407__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__407__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__407__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__407__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__407__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__407__d)));
    __Vfunc_aes_mul_gf2p2__407__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__407__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__407__d)));
    __Vfunc_aes_mul_gf2p2__407__f = ((((IData)(__Vfunc_aes_mul_gf2p2__407__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__407__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__407__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__407__b)));
    __Vfunc_aes_mul_gf2p2__407__Vfuncout = __Vfunc_aes_mul_gf2p2__407__f;
    __Vfunc_aes_mul_gf2p4__404__c = __Vfunc_aes_mul_gf2p2__407__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__408__g = __Vfunc_aes_mul_gf2p4__404__b;
    __Vfunc_aes_scale_omega2_gf2p2__408__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__408__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__408__g)));
    __Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__408__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__404__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__404__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__409__g = __Vfunc_aes_mul_gf2p4__404__b;
    __Vfunc_aes_scale_omega2_gf2p2__409__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__409__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__409__g)));
    __Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__409__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__404__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__404__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__404__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__404__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__404__Vfuncout;
    __Vfunc_aes_mul_gf2p4__422__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__422__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__423__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__422__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__423__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__422__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__423__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__423__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__423__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__423__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__423__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__423__d)));
    __Vfunc_aes_mul_gf2p2__423__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__423__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__423__d)));
    __Vfunc_aes_mul_gf2p2__423__f = ((((IData)(__Vfunc_aes_mul_gf2p2__423__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__423__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__423__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__423__b)));
    __Vfunc_aes_mul_gf2p2__423__Vfuncout = __Vfunc_aes_mul_gf2p2__423__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__a = __Vfunc_aes_mul_gf2p2__423__Vfuncout;
    __Vfunc_aes_mul_gf2p2__424__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__422__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__422__delta)));
    __Vfunc_aes_mul_gf2p2__424__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__422__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__422__gamma)));
    __Vfunc_aes_mul_gf2p2__424__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__424__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__424__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__424__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__424__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__424__d)));
    __Vfunc_aes_mul_gf2p2__424__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__424__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__424__d)));
    __Vfunc_aes_mul_gf2p2__424__f = ((((IData)(__Vfunc_aes_mul_gf2p2__424__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__424__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__424__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__424__b)));
    __Vfunc_aes_mul_gf2p2__424__Vfuncout = __Vfunc_aes_mul_gf2p2__424__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__b = __Vfunc_aes_mul_gf2p2__424__Vfuncout;
    __Vfunc_aes_mul_gf2p2__425__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__422__delta));
    __Vfunc_aes_mul_gf2p2__425__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__422__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__425__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__425__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__425__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__425__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__425__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__425__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__425__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__425__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__425__d)));
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
}
