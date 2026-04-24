// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__11(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__11\n"); );
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
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__598__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__599__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__640__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__642__c;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__646__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__646__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__647__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__647__d;
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
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
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
}
