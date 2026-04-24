// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__13(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__13\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__660__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__660__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__660__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__661__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__661__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__661__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__662__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__662__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__662__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__663__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__663__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__663__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__664__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__664__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__664__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__665__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__665__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__665__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__666__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__666__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__666__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__667__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__667__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__667__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__668__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__668__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__668__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__669__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__669__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__669__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__670__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__670__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__670__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__671__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__671__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__671__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__674__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__674__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__674__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__675__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__675__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__675__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__678__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__678__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__678__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__679__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__679__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__679__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__696__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__696__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__697__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__697__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__702__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__702__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__703__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__703__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__708__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__709__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__732__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__732__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__733__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__733__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__738__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__738__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__739__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__739__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__750__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__752__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__756__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__756__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__757__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__757__d;
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
    vlSelf->__Vfunc_aes_mvm__662__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__662__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__662__vec_c = 0U;
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__662__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__662__Vfuncout = __Vfunc_aes_mvm__662__vec_c;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__661__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][2U] 
                                                >> 8U))));
    __Vfunc_aes_mvm__661__vec_c = 0U;
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__661__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__661__Vfuncout = __Vfunc_aes_mvm__661__vec_c;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__660__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__660__vec_c = 0U;
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__660__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__660__Vfuncout = __Vfunc_aes_mvm__660__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__660__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__661__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__662__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__665__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__665__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__665__vec_c = 0U;
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__665__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__665__Vfuncout = __Vfunc_aes_mvm__665__vec_c;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__664__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__664__vec_c = 0U;
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__664__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__664__Vfuncout = __Vfunc_aes_mvm__664__vec_c;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__663__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__663__vec_c = 0U;
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__663__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__663__Vfuncout = __Vfunc_aes_mvm__663__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__663__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__664__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__665__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__692__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__692__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__693__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__692__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__693__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__692__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__693__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__693__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__693__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__693__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__693__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__693__d)));
    __Vfunc_aes_mul_gf2p2__693__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__693__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__693__d)));
    __Vfunc_aes_mul_gf2p2__693__f = ((((IData)(__Vfunc_aes_mul_gf2p2__693__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__693__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__693__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__693__b)));
    __Vfunc_aes_mul_gf2p2__693__Vfuncout = __Vfunc_aes_mul_gf2p2__693__f;
    __Vfunc_aes_mul_gf2p4__692__a = __Vfunc_aes_mul_gf2p2__693__Vfuncout;
    __Vfunc_aes_mul_gf2p2__694__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__692__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__692__delta)));
    __Vfunc_aes_mul_gf2p2__694__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__692__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__692__gamma)));
    __Vfunc_aes_mul_gf2p2__694__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__694__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__694__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__694__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__694__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__694__d)));
    __Vfunc_aes_mul_gf2p2__694__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__694__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__694__d)));
    __Vfunc_aes_mul_gf2p2__694__f = ((((IData)(__Vfunc_aes_mul_gf2p2__694__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__694__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__694__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__694__b)));
    __Vfunc_aes_mul_gf2p2__694__Vfuncout = __Vfunc_aes_mul_gf2p2__694__f;
    __Vfunc_aes_mul_gf2p4__692__b = __Vfunc_aes_mul_gf2p2__694__Vfuncout;
    __Vfunc_aes_mul_gf2p2__695__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__692__delta));
    __Vfunc_aes_mul_gf2p2__695__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__692__gamma));
    __Vfunc_aes_mul_gf2p2__695__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__695__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__695__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__695__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__695__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__695__d)));
    __Vfunc_aes_mul_gf2p2__695__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__695__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__695__d)));
    __Vfunc_aes_mul_gf2p2__695__f = ((((IData)(__Vfunc_aes_mul_gf2p2__695__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__695__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__695__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__695__b)));
    __Vfunc_aes_mul_gf2p2__695__Vfuncout = __Vfunc_aes_mul_gf2p2__695__f;
    __Vfunc_aes_mul_gf2p4__692__c = __Vfunc_aes_mul_gf2p2__695__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__696__g = __Vfunc_aes_mul_gf2p4__692__b;
    __Vfunc_aes_scale_omega2_gf2p2__696__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__696__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__696__g)));
    __Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__696__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__692__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__692__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__697__g = __Vfunc_aes_mul_gf2p4__692__b;
    __Vfunc_aes_scale_omega2_gf2p2__697__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__697__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__697__g)));
    __Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__697__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__692__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__692__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__692__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__692__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__692__Vfuncout;
    __Vfunc_aes_mul_gf2p4__698__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__698__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__699__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__698__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__699__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__698__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__699__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__699__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__699__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__699__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__699__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__699__d)));
    __Vfunc_aes_mul_gf2p2__699__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__699__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__699__d)));
    __Vfunc_aes_mul_gf2p2__699__f = ((((IData)(__Vfunc_aes_mul_gf2p2__699__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__699__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__699__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__699__b)));
    __Vfunc_aes_mul_gf2p2__699__Vfuncout = __Vfunc_aes_mul_gf2p2__699__f;
    __Vfunc_aes_mul_gf2p4__698__a = __Vfunc_aes_mul_gf2p2__699__Vfuncout;
    __Vfunc_aes_mul_gf2p2__700__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__698__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__698__delta)));
    __Vfunc_aes_mul_gf2p2__700__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__698__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__698__gamma)));
    __Vfunc_aes_mul_gf2p2__700__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__700__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__700__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__700__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__700__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__700__d)));
    __Vfunc_aes_mul_gf2p2__700__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__700__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__700__d)));
    __Vfunc_aes_mul_gf2p2__700__f = ((((IData)(__Vfunc_aes_mul_gf2p2__700__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__700__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__700__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__700__b)));
    __Vfunc_aes_mul_gf2p2__700__Vfuncout = __Vfunc_aes_mul_gf2p2__700__f;
    __Vfunc_aes_mul_gf2p4__698__b = __Vfunc_aes_mul_gf2p2__700__Vfuncout;
    __Vfunc_aes_mul_gf2p2__701__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__698__delta));
    __Vfunc_aes_mul_gf2p2__701__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__698__gamma));
    __Vfunc_aes_mul_gf2p2__701__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__701__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__701__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__701__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__701__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__701__d)));
    __Vfunc_aes_mul_gf2p2__701__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__701__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__701__d)));
    __Vfunc_aes_mul_gf2p2__701__f = ((((IData)(__Vfunc_aes_mul_gf2p2__701__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__701__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__701__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__701__b)));
    __Vfunc_aes_mul_gf2p2__701__Vfuncout = __Vfunc_aes_mul_gf2p2__701__f;
    __Vfunc_aes_mul_gf2p4__698__c = __Vfunc_aes_mul_gf2p2__701__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__702__g = __Vfunc_aes_mul_gf2p4__698__b;
    __Vfunc_aes_scale_omega2_gf2p2__702__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__702__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__702__g)));
    __Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__702__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__698__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__698__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__703__g = __Vfunc_aes_mul_gf2p4__698__b;
    __Vfunc_aes_scale_omega2_gf2p2__703__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__703__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__703__g)));
    __Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__703__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__698__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__698__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__698__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__698__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__698__Vfuncout;
    __Vfunc_aes_mul_gf2p2__716__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__716__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__716__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__716__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__716__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__716__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__716__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__716__d)));
    __Vfunc_aes_mul_gf2p2__716__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__716__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__716__d)));
    __Vfunc_aes_mul_gf2p2__716__f = ((((IData)(__Vfunc_aes_mul_gf2p2__716__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__716__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__716__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__716__b)));
    __Vfunc_aes_mul_gf2p2__716__Vfuncout = __Vfunc_aes_mul_gf2p2__716__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__716__Vfuncout;
    __Vfunc_aes_mul_gf2p2__717__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__717__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__717__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__717__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__717__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__717__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__717__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__717__d)));
    __Vfunc_aes_mul_gf2p2__717__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__717__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__717__d)));
    __Vfunc_aes_mul_gf2p2__717__f = ((((IData)(__Vfunc_aes_mul_gf2p2__717__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__717__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__717__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__717__b)));
    __Vfunc_aes_mul_gf2p2__717__Vfuncout = __Vfunc_aes_mul_gf2p2__717__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__717__Vfuncout;
    __Vfunc_aes_mul_gf2p2__720__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__720__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__720__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__720__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__720__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__720__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__720__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__720__d)));
    __Vfunc_aes_mul_gf2p2__720__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__720__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__720__d)));
    __Vfunc_aes_mul_gf2p2__720__f = ((((IData)(__Vfunc_aes_mul_gf2p2__720__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__720__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__720__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__720__b)));
    __Vfunc_aes_mul_gf2p2__720__Vfuncout = __Vfunc_aes_mul_gf2p2__720__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__721__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__721__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__721__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__721__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__721__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__721__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__721__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__721__d)));
    __Vfunc_aes_mul_gf2p2__721__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__721__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__721__d)));
    __Vfunc_aes_mul_gf2p2__721__f = ((((IData)(__Vfunc_aes_mul_gf2p2__721__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__721__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__721__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__721__b)));
    __Vfunc_aes_mul_gf2p2__721__Vfuncout = __Vfunc_aes_mul_gf2p2__721__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__721__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__671__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__671__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__671__vec_c = 0U;
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__671__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__671__Vfuncout = __Vfunc_aes_mvm__671__vec_c;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__670__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__670__vec_c = 0U;
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__670__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__670__Vfuncout = __Vfunc_aes_mvm__670__vec_c;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__669__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__669__vec_c = 0U;
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__669__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__669__Vfuncout = __Vfunc_aes_mvm__669__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__669__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__670__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__671__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__668__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__668__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__668__vec_c = 0U;
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__668__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__668__Vfuncout = __Vfunc_aes_mvm__668__vec_c;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__667__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__667__vec_c = 0U;
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__667__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__667__Vfuncout = __Vfunc_aes_mvm__667__vec_c;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__666__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__666__vec_c = 0U;
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__666__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__666__Vfuncout = __Vfunc_aes_mvm__666__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__666__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__667__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__668__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__712__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__712__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__712__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__712__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__712__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__712__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__712__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__712__d)));
    __Vfunc_aes_mul_gf2p2__712__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__712__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__712__d)));
    __Vfunc_aes_mul_gf2p2__712__f = ((((IData)(__Vfunc_aes_mul_gf2p2__712__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__712__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__712__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__712__b)));
    __Vfunc_aes_mul_gf2p2__712__Vfuncout = __Vfunc_aes_mul_gf2p2__712__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__712__Vfuncout;
    __Vfunc_aes_mul_gf2p2__713__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__713__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__713__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__713__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__713__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__713__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__713__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__713__d)));
    __Vfunc_aes_mul_gf2p2__713__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__713__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__713__d)));
    __Vfunc_aes_mul_gf2p2__713__f = ((((IData)(__Vfunc_aes_mul_gf2p2__713__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__713__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__713__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__713__b)));
    __Vfunc_aes_mul_gf2p2__713__Vfuncout = __Vfunc_aes_mul_gf2p2__713__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__713__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma)));
    __Vfunc_aes_square_gf2p2__673__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma));
    __Vfunc_aes_square_gf2p2__673__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__673__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__673__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__673__Vfuncout = __Vfunc_aes_square_gf2p2__673__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b = __Vfunc_aes_square_gf2p2__673__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__675__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b;
    __Vfunc_aes_scale_omega_gf2p2__675__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__675__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__675__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__675__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__675__d;
    __Vfunc_aes_square_gf2p2__674__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a;
    __Vfunc_aes_square_gf2p2__674__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__674__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__674__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__674__Vfuncout = __Vfunc_aes_square_gf2p2__674__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__674__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__675__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma)));
    __Vfunc_aes_square_gf2p2__677__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma));
    __Vfunc_aes_square_gf2p2__677__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__677__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__677__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__677__Vfuncout = __Vfunc_aes_square_gf2p2__677__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b = __Vfunc_aes_square_gf2p2__677__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__679__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b;
    __Vfunc_aes_scale_omega_gf2p2__679__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__679__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__679__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__679__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__679__d;
    __Vfunc_aes_square_gf2p2__678__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a;
    __Vfunc_aes_square_gf2p2__678__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__678__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__678__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__678__Vfuncout = __Vfunc_aes_square_gf2p2__678__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__678__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__679__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__705__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__705__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__705__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__705__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__705__Vfuncout = __Vfunc_aes_square_gf2p2__705__d;
    __Vfunc_aes_scale_omega2_gf2p2__704__g = __Vfunc_aes_square_gf2p2__705__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__704__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__704__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__704__g)));
    __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__704__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout;
    __Vfunc_aes_square_gf2p2__707__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__707__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__707__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__707__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__707__Vfuncout = __Vfunc_aes_square_gf2p2__707__d;
    __Vfunc_aes_scale_omega2_gf2p2__706__g = __Vfunc_aes_square_gf2p2__707__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__706__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__706__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__706__g)));
    __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__706__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout;
    __Vfunc_aes_mul_gf2p4__728__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__728__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__729__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__728__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__729__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__728__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__729__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__729__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__729__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__729__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__729__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__729__d)));
    __Vfunc_aes_mul_gf2p2__729__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__729__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__729__d)));
    __Vfunc_aes_mul_gf2p2__729__f = ((((IData)(__Vfunc_aes_mul_gf2p2__729__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__729__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__729__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__729__b)));
    __Vfunc_aes_mul_gf2p2__729__Vfuncout = __Vfunc_aes_mul_gf2p2__729__f;
    __Vfunc_aes_mul_gf2p4__728__a = __Vfunc_aes_mul_gf2p2__729__Vfuncout;
    __Vfunc_aes_mul_gf2p2__730__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__728__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__728__delta)));
    __Vfunc_aes_mul_gf2p2__730__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__728__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__728__gamma)));
    __Vfunc_aes_mul_gf2p2__730__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__730__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__730__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__730__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__730__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__730__d)));
    __Vfunc_aes_mul_gf2p2__730__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__730__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__730__d)));
    __Vfunc_aes_mul_gf2p2__730__f = ((((IData)(__Vfunc_aes_mul_gf2p2__730__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__730__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__730__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__730__b)));
    __Vfunc_aes_mul_gf2p2__730__Vfuncout = __Vfunc_aes_mul_gf2p2__730__f;
    __Vfunc_aes_mul_gf2p4__728__b = __Vfunc_aes_mul_gf2p2__730__Vfuncout;
    __Vfunc_aes_mul_gf2p2__731__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__728__delta));
    __Vfunc_aes_mul_gf2p2__731__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__728__gamma));
    __Vfunc_aes_mul_gf2p2__731__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__731__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__731__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__731__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__731__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__731__d)));
    __Vfunc_aes_mul_gf2p2__731__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__731__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__731__d)));
    __Vfunc_aes_mul_gf2p2__731__f = ((((IData)(__Vfunc_aes_mul_gf2p2__731__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__731__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__731__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__731__b)));
    __Vfunc_aes_mul_gf2p2__731__Vfuncout = __Vfunc_aes_mul_gf2p2__731__f;
    __Vfunc_aes_mul_gf2p4__728__c = __Vfunc_aes_mul_gf2p2__731__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__732__g = __Vfunc_aes_mul_gf2p4__728__b;
    __Vfunc_aes_scale_omega2_gf2p2__732__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__732__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__732__g)));
    __Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__732__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__728__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__728__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__733__g = __Vfunc_aes_mul_gf2p4__728__b;
    __Vfunc_aes_scale_omega2_gf2p2__733__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__733__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__733__g)));
    __Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__733__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__728__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__728__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__728__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__728__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__728__Vfuncout;
    __Vfunc_aes_mul_gf2p4__734__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__734__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__735__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__734__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__735__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__734__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__735__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__735__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__735__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__735__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__735__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__735__d)));
    __Vfunc_aes_mul_gf2p2__735__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__735__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__735__d)));
    __Vfunc_aes_mul_gf2p2__735__f = ((((IData)(__Vfunc_aes_mul_gf2p2__735__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__735__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__735__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__735__b)));
    __Vfunc_aes_mul_gf2p2__735__Vfuncout = __Vfunc_aes_mul_gf2p2__735__f;
    __Vfunc_aes_mul_gf2p4__734__a = __Vfunc_aes_mul_gf2p2__735__Vfuncout;
    __Vfunc_aes_mul_gf2p2__736__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__734__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__734__delta)));
    __Vfunc_aes_mul_gf2p2__736__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__734__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__734__gamma)));
    __Vfunc_aes_mul_gf2p2__736__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__736__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__736__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__736__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__736__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__736__d)));
    __Vfunc_aes_mul_gf2p2__736__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__736__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__736__d)));
    __Vfunc_aes_mul_gf2p2__736__f = ((((IData)(__Vfunc_aes_mul_gf2p2__736__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__736__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__736__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__736__b)));
    __Vfunc_aes_mul_gf2p2__736__Vfuncout = __Vfunc_aes_mul_gf2p2__736__f;
    __Vfunc_aes_mul_gf2p4__734__b = __Vfunc_aes_mul_gf2p2__736__Vfuncout;
    __Vfunc_aes_mul_gf2p2__737__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__734__delta));
    __Vfunc_aes_mul_gf2p2__737__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__734__gamma));
    __Vfunc_aes_mul_gf2p2__737__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__737__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__737__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__737__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__737__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__737__d)));
    __Vfunc_aes_mul_gf2p2__737__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__737__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__737__d)));
    __Vfunc_aes_mul_gf2p2__737__f = ((((IData)(__Vfunc_aes_mul_gf2p2__737__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__737__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__737__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__737__b)));
    __Vfunc_aes_mul_gf2p2__737__Vfuncout = __Vfunc_aes_mul_gf2p2__737__f;
    __Vfunc_aes_mul_gf2p4__734__c = __Vfunc_aes_mul_gf2p2__737__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__738__g = __Vfunc_aes_mul_gf2p4__734__b;
    __Vfunc_aes_scale_omega2_gf2p2__738__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__738__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__738__g)));
    __Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__738__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__734__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__734__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__739__g = __Vfunc_aes_mul_gf2p4__734__b;
    __Vfunc_aes_scale_omega2_gf2p2__739__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__739__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__739__g)));
    __Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__739__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__734__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__734__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__734__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__734__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__734__Vfuncout;
    __Vfunc_aes_mul_gf2p4__752__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__752__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__753__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__752__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__753__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__752__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__753__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__753__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__753__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__753__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__753__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__753__d)));
    __Vfunc_aes_mul_gf2p2__753__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__753__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__753__d)));
    __Vfunc_aes_mul_gf2p2__753__f = ((((IData)(__Vfunc_aes_mul_gf2p2__753__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__753__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__753__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__753__b)));
    __Vfunc_aes_mul_gf2p2__753__Vfuncout = __Vfunc_aes_mul_gf2p2__753__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__a = __Vfunc_aes_mul_gf2p2__753__Vfuncout;
    __Vfunc_aes_mul_gf2p2__754__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__752__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__752__delta)));
    __Vfunc_aes_mul_gf2p2__754__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__752__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__752__gamma)));
    __Vfunc_aes_mul_gf2p2__754__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__754__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__754__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__754__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__754__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__754__d)));
    __Vfunc_aes_mul_gf2p2__754__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__754__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__754__d)));
    __Vfunc_aes_mul_gf2p2__754__f = ((((IData)(__Vfunc_aes_mul_gf2p2__754__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__754__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__754__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__754__b)));
    __Vfunc_aes_mul_gf2p2__754__Vfuncout = __Vfunc_aes_mul_gf2p2__754__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__b = __Vfunc_aes_mul_gf2p2__754__Vfuncout;
    __Vfunc_aes_mul_gf2p2__755__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__752__delta));
    __Vfunc_aes_mul_gf2p2__755__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__752__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__755__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__755__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__755__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__755__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__755__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__755__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__755__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__755__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__755__d)));
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
}
