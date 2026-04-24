// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__3(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__3\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__110__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__110__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__110__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__111__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__111__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__111__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__112__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__112__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__112__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__113__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__113__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__113__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__114__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__114__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__114__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__115__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__115__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__115__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__116__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__116__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__116__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__117__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__117__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__117__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__118__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__118__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__118__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__119__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__119__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__119__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__120__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__120__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__120__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__121__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__121__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__121__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__123__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__123__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__123__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__124__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__124__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__124__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__125__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__125__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__125__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__127__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__127__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__127__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__128__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__128__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__128__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__129__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__129__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__129__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__142__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__142__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__142__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__142__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__142__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__142__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__143__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__143__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__143__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__144__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__144__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__144__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__145__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__145__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__145__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__146__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__146__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__146__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__147__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__147__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__147__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__148__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__148__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__148__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__148__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__148__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__148__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__149__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__149__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__149__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__150__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__150__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__150__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__151__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__151__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__151__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__152__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__152__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__152__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__153__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__153__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__153__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__154__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__154__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__155__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__155__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__155__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__156__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__156__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__157__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__157__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__157__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__162__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__162__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__162__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__163__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__163__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__163__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__166__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__166__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__166__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__167__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__167__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__167__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__170__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__170__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__170__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__171__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__171__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__171__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__178__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__178__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__178__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__178__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__178__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__178__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__179__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__179__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__179__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__180__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__180__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__180__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__181__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__181__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__181__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__182__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__182__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__182__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__183__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__183__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__183__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__184__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__184__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__184__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__184__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__184__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__184__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__185__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__185__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__185__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__186__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__186__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__186__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__187__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__187__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__187__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__188__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__188__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__188__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__189__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__189__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__189__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__200__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__202__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__203__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__203__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__203__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__204__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__204__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__204__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__206__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__206__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__207__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__207__d;
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
    vlSelf->__Vfunc_aes_mvm__112__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__112__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__112__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][1U]);
    __Vfunc_aes_mvm__112__vec_c = 0U;
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__112__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__112__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__112__vec_b)))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__112__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__112__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__112__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__112__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__112__Vfuncout = __Vfunc_aes_mvm__112__vec_c;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__111__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__111__vec_b = (0xffU & (0x63U ^ 
                                            vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][1U]));
    __Vfunc_aes_mvm__111__vec_c = 0U;
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__111__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__111__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__111__vec_b)))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__111__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__111__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__111__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__111__Vfuncout = __Vfunc_aes_mvm__111__vec_c;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__110__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__110__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][1U]);
    __Vfunc_aes_mvm__110__vec_c = 0U;
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__110__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__110__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__110__vec_b)))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__110__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__110__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__110__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__110__Vfuncout = __Vfunc_aes_mvm__110__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__110__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__111__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__112__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__115__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__115__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__115__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][1U]);
    __Vfunc_aes_mvm__115__vec_c = 0U;
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__115__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__115__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__115__vec_b)))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__115__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__115__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__115__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__115__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__115__Vfuncout = __Vfunc_aes_mvm__115__vec_c;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__114__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__114__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][1U]);
    __Vfunc_aes_mvm__114__vec_c = 0U;
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__114__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__114__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__114__vec_b)))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__114__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__114__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__114__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__114__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__114__Vfuncout = __Vfunc_aes_mvm__114__vec_c;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__113__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__113__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][1U]);
    __Vfunc_aes_mvm__113__vec_c = 0U;
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__113__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__113__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__113__vec_b)))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__113__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__113__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__113__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__113__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__113__Vfuncout = __Vfunc_aes_mvm__113__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__113__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__114__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__115__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__142__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__142__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__143__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__142__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__143__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__142__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__143__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__143__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__143__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__143__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__143__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__143__d)));
    __Vfunc_aes_mul_gf2p2__143__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__143__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__143__d)));
    __Vfunc_aes_mul_gf2p2__143__f = ((((IData)(__Vfunc_aes_mul_gf2p2__143__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__143__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__143__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__143__b)));
    __Vfunc_aes_mul_gf2p2__143__Vfuncout = __Vfunc_aes_mul_gf2p2__143__f;
    __Vfunc_aes_mul_gf2p4__142__a = __Vfunc_aes_mul_gf2p2__143__Vfuncout;
    __Vfunc_aes_mul_gf2p2__144__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__142__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__142__delta)));
    __Vfunc_aes_mul_gf2p2__144__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__142__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__142__gamma)));
    __Vfunc_aes_mul_gf2p2__144__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__144__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__144__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__144__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__144__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__144__d)));
    __Vfunc_aes_mul_gf2p2__144__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__144__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__144__d)));
    __Vfunc_aes_mul_gf2p2__144__f = ((((IData)(__Vfunc_aes_mul_gf2p2__144__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__144__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__144__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__144__b)));
    __Vfunc_aes_mul_gf2p2__144__Vfuncout = __Vfunc_aes_mul_gf2p2__144__f;
    __Vfunc_aes_mul_gf2p4__142__b = __Vfunc_aes_mul_gf2p2__144__Vfuncout;
    __Vfunc_aes_mul_gf2p2__145__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__142__delta));
    __Vfunc_aes_mul_gf2p2__145__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__142__gamma));
    __Vfunc_aes_mul_gf2p2__145__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__145__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__145__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__145__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__145__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__145__d)));
    __Vfunc_aes_mul_gf2p2__145__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__145__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__145__d)));
    __Vfunc_aes_mul_gf2p2__145__f = ((((IData)(__Vfunc_aes_mul_gf2p2__145__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__145__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__145__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__145__b)));
    __Vfunc_aes_mul_gf2p2__145__Vfuncout = __Vfunc_aes_mul_gf2p2__145__f;
    __Vfunc_aes_mul_gf2p4__142__c = __Vfunc_aes_mul_gf2p2__145__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__146__g = __Vfunc_aes_mul_gf2p4__142__b;
    __Vfunc_aes_scale_omega2_gf2p2__146__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__146__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__146__g)));
    __Vfunc_aes_scale_omega2_gf2p2__146__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__146__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__142__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__142__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__142__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__146__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__147__g = __Vfunc_aes_mul_gf2p4__142__b;
    __Vfunc_aes_scale_omega2_gf2p2__147__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__147__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__147__g)));
    __Vfunc_aes_scale_omega2_gf2p2__147__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__147__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__142__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__142__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__142__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__147__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__142__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__142__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__142__Vfuncout;
    __Vfunc_aes_mul_gf2p4__148__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__148__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__149__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__148__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__149__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__148__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__149__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__149__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__149__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__149__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__149__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__149__d)));
    __Vfunc_aes_mul_gf2p2__149__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__149__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__149__d)));
    __Vfunc_aes_mul_gf2p2__149__f = ((((IData)(__Vfunc_aes_mul_gf2p2__149__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__149__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__149__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__149__b)));
    __Vfunc_aes_mul_gf2p2__149__Vfuncout = __Vfunc_aes_mul_gf2p2__149__f;
    __Vfunc_aes_mul_gf2p4__148__a = __Vfunc_aes_mul_gf2p2__149__Vfuncout;
    __Vfunc_aes_mul_gf2p2__150__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__148__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__148__delta)));
    __Vfunc_aes_mul_gf2p2__150__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__148__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__148__gamma)));
    __Vfunc_aes_mul_gf2p2__150__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__150__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__150__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__150__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__150__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__150__d)));
    __Vfunc_aes_mul_gf2p2__150__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__150__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__150__d)));
    __Vfunc_aes_mul_gf2p2__150__f = ((((IData)(__Vfunc_aes_mul_gf2p2__150__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__150__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__150__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__150__b)));
    __Vfunc_aes_mul_gf2p2__150__Vfuncout = __Vfunc_aes_mul_gf2p2__150__f;
    __Vfunc_aes_mul_gf2p4__148__b = __Vfunc_aes_mul_gf2p2__150__Vfuncout;
    __Vfunc_aes_mul_gf2p2__151__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__148__delta));
    __Vfunc_aes_mul_gf2p2__151__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__148__gamma));
    __Vfunc_aes_mul_gf2p2__151__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__151__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__151__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__151__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__151__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__151__d)));
    __Vfunc_aes_mul_gf2p2__151__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__151__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__151__d)));
    __Vfunc_aes_mul_gf2p2__151__f = ((((IData)(__Vfunc_aes_mul_gf2p2__151__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__151__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__151__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__151__b)));
    __Vfunc_aes_mul_gf2p2__151__Vfuncout = __Vfunc_aes_mul_gf2p2__151__f;
    __Vfunc_aes_mul_gf2p4__148__c = __Vfunc_aes_mul_gf2p2__151__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__152__g = __Vfunc_aes_mul_gf2p4__148__b;
    __Vfunc_aes_scale_omega2_gf2p2__152__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__152__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__152__g)));
    __Vfunc_aes_scale_omega2_gf2p2__152__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__152__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__148__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__148__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__148__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__152__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__153__g = __Vfunc_aes_mul_gf2p4__148__b;
    __Vfunc_aes_scale_omega2_gf2p2__153__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__153__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__153__g)));
    __Vfunc_aes_scale_omega2_gf2p2__153__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__153__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__148__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__148__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__148__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__153__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__148__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__148__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__148__Vfuncout;
    __Vfunc_aes_mul_gf2p2__166__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__166__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__166__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__166__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__166__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__166__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__166__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__166__d)));
    __Vfunc_aes_mul_gf2p2__166__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__166__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__166__d)));
    __Vfunc_aes_mul_gf2p2__166__f = ((((IData)(__Vfunc_aes_mul_gf2p2__166__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__166__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__166__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__166__b)));
    __Vfunc_aes_mul_gf2p2__166__Vfuncout = __Vfunc_aes_mul_gf2p2__166__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__166__Vfuncout;
    __Vfunc_aes_mul_gf2p2__167__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__167__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__167__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__167__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__167__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__167__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__167__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__167__d)));
    __Vfunc_aes_mul_gf2p2__167__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__167__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__167__d)));
    __Vfunc_aes_mul_gf2p2__167__f = ((((IData)(__Vfunc_aes_mul_gf2p2__167__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__167__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__167__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__167__b)));
    __Vfunc_aes_mul_gf2p2__167__Vfuncout = __Vfunc_aes_mul_gf2p2__167__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__167__Vfuncout;
    __Vfunc_aes_mul_gf2p2__170__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__170__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__170__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__170__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__170__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__170__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__170__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__170__d)));
    __Vfunc_aes_mul_gf2p2__170__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__170__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__170__d)));
    __Vfunc_aes_mul_gf2p2__170__f = ((((IData)(__Vfunc_aes_mul_gf2p2__170__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__170__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__170__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__170__b)));
    __Vfunc_aes_mul_gf2p2__170__Vfuncout = __Vfunc_aes_mul_gf2p2__170__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__171__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__171__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__171__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__171__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__171__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__171__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__171__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__171__d)));
    __Vfunc_aes_mul_gf2p2__171__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__171__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__171__d)));
    __Vfunc_aes_mul_gf2p2__171__f = ((((IData)(__Vfunc_aes_mul_gf2p2__171__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__171__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__171__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__171__b)));
    __Vfunc_aes_mul_gf2p2__171__Vfuncout = __Vfunc_aes_mul_gf2p2__171__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__171__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__121__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__121__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__121__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__121__vec_c = 0U;
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__121__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__121__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__121__vec_b)))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__121__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__121__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__121__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__121__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__121__Vfuncout = __Vfunc_aes_mvm__121__vec_c;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__120__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__120__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__120__vec_c = 0U;
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__120__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__120__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__120__vec_b)))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__120__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__120__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__120__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__120__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__120__Vfuncout = __Vfunc_aes_mvm__120__vec_c;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__119__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__119__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__119__vec_c = 0U;
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__119__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__119__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__119__vec_b)))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__119__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__119__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__119__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__119__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__119__Vfuncout = __Vfunc_aes_mvm__119__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__119__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__120__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__121__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__118__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__118__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__118__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__118__vec_c = 0U;
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__118__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__118__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__118__vec_b)))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__118__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__118__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__118__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__118__Vfuncout = __Vfunc_aes_mvm__118__vec_c;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__117__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__117__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__117__vec_c = 0U;
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__117__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__117__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__117__vec_b)))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__117__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__117__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__117__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__117__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__117__Vfuncout = __Vfunc_aes_mvm__117__vec_c;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__116__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__116__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__116__vec_c = 0U;
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__116__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__116__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__116__vec_b)))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__116__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__116__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__116__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__116__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__116__Vfuncout = __Vfunc_aes_mvm__116__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__116__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__117__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__118__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__162__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__162__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__162__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__162__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__162__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__162__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__162__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__162__d)));
    __Vfunc_aes_mul_gf2p2__162__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__162__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__162__d)));
    __Vfunc_aes_mul_gf2p2__162__f = ((((IData)(__Vfunc_aes_mul_gf2p2__162__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__162__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__162__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__162__b)));
    __Vfunc_aes_mul_gf2p2__162__Vfuncout = __Vfunc_aes_mul_gf2p2__162__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__162__Vfuncout;
    __Vfunc_aes_mul_gf2p2__163__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__163__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__163__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__163__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__163__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__163__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__163__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__163__d)));
    __Vfunc_aes_mul_gf2p2__163__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__163__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__163__d)));
    __Vfunc_aes_mul_gf2p2__163__f = ((((IData)(__Vfunc_aes_mul_gf2p2__163__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__163__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__163__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__163__b)));
    __Vfunc_aes_mul_gf2p2__163__Vfuncout = __Vfunc_aes_mul_gf2p2__163__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__163__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma)));
    __Vfunc_aes_square_gf2p2__123__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma));
    __Vfunc_aes_square_gf2p2__123__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__123__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__123__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__123__Vfuncout = __Vfunc_aes_square_gf2p2__123__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b = __Vfunc_aes_square_gf2p2__123__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__125__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b;
    __Vfunc_aes_scale_omega_gf2p2__125__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__125__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__125__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__125__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__125__d;
    __Vfunc_aes_square_gf2p2__124__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a;
    __Vfunc_aes_square_gf2p2__124__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__124__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__124__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__124__Vfuncout = __Vfunc_aes_square_gf2p2__124__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__124__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__125__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma)));
    __Vfunc_aes_square_gf2p2__127__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma));
    __Vfunc_aes_square_gf2p2__127__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__127__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__127__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__127__Vfuncout = __Vfunc_aes_square_gf2p2__127__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b = __Vfunc_aes_square_gf2p2__127__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__129__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b;
    __Vfunc_aes_scale_omega_gf2p2__129__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__129__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__129__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__129__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__129__d;
    __Vfunc_aes_square_gf2p2__128__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a;
    __Vfunc_aes_square_gf2p2__128__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__128__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__128__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__128__Vfuncout = __Vfunc_aes_square_gf2p2__128__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__128__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__129__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__155__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__155__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__155__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__155__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__155__Vfuncout = __Vfunc_aes_square_gf2p2__155__d;
    __Vfunc_aes_scale_omega2_gf2p2__154__g = __Vfunc_aes_square_gf2p2__155__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__154__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__154__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__154__g)));
    __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__154__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout;
    __Vfunc_aes_square_gf2p2__157__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__157__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__157__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__157__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__157__Vfuncout = __Vfunc_aes_square_gf2p2__157__d;
    __Vfunc_aes_scale_omega2_gf2p2__156__g = __Vfunc_aes_square_gf2p2__157__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__156__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__156__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__156__g)));
    __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__156__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout;
    __Vfunc_aes_mul_gf2p4__178__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__178__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__179__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__178__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__179__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__178__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__179__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__179__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__179__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__179__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__179__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__179__d)));
    __Vfunc_aes_mul_gf2p2__179__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__179__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__179__d)));
    __Vfunc_aes_mul_gf2p2__179__f = ((((IData)(__Vfunc_aes_mul_gf2p2__179__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__179__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__179__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__179__b)));
    __Vfunc_aes_mul_gf2p2__179__Vfuncout = __Vfunc_aes_mul_gf2p2__179__f;
    __Vfunc_aes_mul_gf2p4__178__a = __Vfunc_aes_mul_gf2p2__179__Vfuncout;
    __Vfunc_aes_mul_gf2p2__180__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__178__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__178__delta)));
    __Vfunc_aes_mul_gf2p2__180__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__178__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__178__gamma)));
    __Vfunc_aes_mul_gf2p2__180__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__180__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__180__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__180__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__180__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__180__d)));
    __Vfunc_aes_mul_gf2p2__180__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__180__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__180__d)));
    __Vfunc_aes_mul_gf2p2__180__f = ((((IData)(__Vfunc_aes_mul_gf2p2__180__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__180__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__180__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__180__b)));
    __Vfunc_aes_mul_gf2p2__180__Vfuncout = __Vfunc_aes_mul_gf2p2__180__f;
    __Vfunc_aes_mul_gf2p4__178__b = __Vfunc_aes_mul_gf2p2__180__Vfuncout;
    __Vfunc_aes_mul_gf2p2__181__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__178__delta));
    __Vfunc_aes_mul_gf2p2__181__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__178__gamma));
    __Vfunc_aes_mul_gf2p2__181__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__181__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__181__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__181__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__181__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__181__d)));
    __Vfunc_aes_mul_gf2p2__181__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__181__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__181__d)));
    __Vfunc_aes_mul_gf2p2__181__f = ((((IData)(__Vfunc_aes_mul_gf2p2__181__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__181__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__181__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__181__b)));
    __Vfunc_aes_mul_gf2p2__181__Vfuncout = __Vfunc_aes_mul_gf2p2__181__f;
    __Vfunc_aes_mul_gf2p4__178__c = __Vfunc_aes_mul_gf2p2__181__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__182__g = __Vfunc_aes_mul_gf2p4__178__b;
    __Vfunc_aes_scale_omega2_gf2p2__182__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__182__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__182__g)));
    __Vfunc_aes_scale_omega2_gf2p2__182__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__182__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__178__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__178__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__178__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__182__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__183__g = __Vfunc_aes_mul_gf2p4__178__b;
    __Vfunc_aes_scale_omega2_gf2p2__183__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__183__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__183__g)));
    __Vfunc_aes_scale_omega2_gf2p2__183__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__183__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__178__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__178__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__178__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__183__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__178__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__178__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__178__Vfuncout;
    __Vfunc_aes_mul_gf2p4__184__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__184__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__185__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__184__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__185__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__184__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__185__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__185__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__185__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__185__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__185__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__185__d)));
    __Vfunc_aes_mul_gf2p2__185__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__185__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__185__d)));
    __Vfunc_aes_mul_gf2p2__185__f = ((((IData)(__Vfunc_aes_mul_gf2p2__185__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__185__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__185__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__185__b)));
    __Vfunc_aes_mul_gf2p2__185__Vfuncout = __Vfunc_aes_mul_gf2p2__185__f;
    __Vfunc_aes_mul_gf2p4__184__a = __Vfunc_aes_mul_gf2p2__185__Vfuncout;
    __Vfunc_aes_mul_gf2p2__186__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__184__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__184__delta)));
    __Vfunc_aes_mul_gf2p2__186__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__184__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__184__gamma)));
    __Vfunc_aes_mul_gf2p2__186__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__186__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__186__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__186__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__186__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__186__d)));
    __Vfunc_aes_mul_gf2p2__186__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__186__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__186__d)));
    __Vfunc_aes_mul_gf2p2__186__f = ((((IData)(__Vfunc_aes_mul_gf2p2__186__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__186__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__186__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__186__b)));
    __Vfunc_aes_mul_gf2p2__186__Vfuncout = __Vfunc_aes_mul_gf2p2__186__f;
    __Vfunc_aes_mul_gf2p4__184__b = __Vfunc_aes_mul_gf2p2__186__Vfuncout;
    __Vfunc_aes_mul_gf2p2__187__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__184__delta));
    __Vfunc_aes_mul_gf2p2__187__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__184__gamma));
    __Vfunc_aes_mul_gf2p2__187__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__187__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__187__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__187__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__187__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__187__d)));
    __Vfunc_aes_mul_gf2p2__187__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__187__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__187__d)));
    __Vfunc_aes_mul_gf2p2__187__f = ((((IData)(__Vfunc_aes_mul_gf2p2__187__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__187__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__187__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__187__b)));
    __Vfunc_aes_mul_gf2p2__187__Vfuncout = __Vfunc_aes_mul_gf2p2__187__f;
    __Vfunc_aes_mul_gf2p4__184__c = __Vfunc_aes_mul_gf2p2__187__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__188__g = __Vfunc_aes_mul_gf2p4__184__b;
    __Vfunc_aes_scale_omega2_gf2p2__188__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__188__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__188__g)));
    __Vfunc_aes_scale_omega2_gf2p2__188__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__188__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__184__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__184__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__184__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__188__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__189__g = __Vfunc_aes_mul_gf2p4__184__b;
    __Vfunc_aes_scale_omega2_gf2p2__189__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__189__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__189__g)));
    __Vfunc_aes_scale_omega2_gf2p2__189__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__189__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__184__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__184__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__184__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__189__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__184__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__184__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__184__Vfuncout;
    __Vfunc_aes_mul_gf2p4__202__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__202__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__203__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__202__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__203__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__202__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__203__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__203__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__203__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__203__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__203__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__203__d)));
    __Vfunc_aes_mul_gf2p2__203__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__203__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__203__d)));
    __Vfunc_aes_mul_gf2p2__203__f = ((((IData)(__Vfunc_aes_mul_gf2p2__203__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__203__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__203__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__203__b)));
    __Vfunc_aes_mul_gf2p2__203__Vfuncout = __Vfunc_aes_mul_gf2p2__203__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__202__a = __Vfunc_aes_mul_gf2p2__203__Vfuncout;
    __Vfunc_aes_mul_gf2p2__204__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__202__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__202__delta)));
    __Vfunc_aes_mul_gf2p2__204__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__202__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__202__gamma)));
    __Vfunc_aes_mul_gf2p2__204__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__204__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__204__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__204__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__204__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__204__d)));
    __Vfunc_aes_mul_gf2p2__204__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__204__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__204__d)));
    __Vfunc_aes_mul_gf2p2__204__f = ((((IData)(__Vfunc_aes_mul_gf2p2__204__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__204__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__204__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__204__b)));
    __Vfunc_aes_mul_gf2p2__204__Vfuncout = __Vfunc_aes_mul_gf2p2__204__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__202__b = __Vfunc_aes_mul_gf2p2__204__Vfuncout;
    __Vfunc_aes_mul_gf2p2__205__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__202__delta));
    __Vfunc_aes_mul_gf2p2__205__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__202__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__205__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__205__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__205__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__205__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__205__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__205__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__205__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__205__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__205__d)));
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
}
