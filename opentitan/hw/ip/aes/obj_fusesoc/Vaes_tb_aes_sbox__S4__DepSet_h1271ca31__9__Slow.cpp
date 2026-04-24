// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__19(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__19\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__990__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__990__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__990__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__991__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__991__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__991__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__992__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__992__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__992__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__993__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__993__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__993__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__994__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__994__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__994__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__995__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__995__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__995__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__996__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__996__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__996__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__997__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__997__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__997__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__998__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__998__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__998__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__999__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__999__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__999__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1000__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1000__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1000__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1001__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1001__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1001__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1003__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1003__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1003__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1004__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1004__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1004__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1005__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1005__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1005__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1007__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1007__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1007__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1008__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1008__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1008__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1009__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1009__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1009__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1022__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1022__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1022__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1022__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1022__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1022__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1023__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1023__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1023__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1023__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1024__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1024__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1024__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1024__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1025__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1025__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1025__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1025__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1026__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1026__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1026__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1027__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1027__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1027__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1028__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1028__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1028__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1028__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1028__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1028__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1029__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1029__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1029__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1029__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1030__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1030__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1030__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1030__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1031__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1031__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1031__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1031__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1032__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1032__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1032__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1033__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1033__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1033__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1034__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1034__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1035__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1035__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1035__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1036__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1036__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1037__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1037__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1037__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1038__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1039__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1042__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1042__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1042__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1042__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1043__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1043__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1043__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1043__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1046__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1046__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1046__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1046__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1047__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1047__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1047__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1047__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1050__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1050__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1050__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1050__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1051__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1051__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1051__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1051__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1058__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1058__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1058__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1058__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1058__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1058__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1059__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1059__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1059__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1059__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1060__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1060__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1060__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1060__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1061__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1061__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1061__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1061__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1062__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1062__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1062__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1063__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1063__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1063__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1064__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1064__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1064__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1064__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1064__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1064__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1065__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1065__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1065__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1065__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1066__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1066__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1066__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1066__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1067__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1067__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1067__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1067__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1068__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1068__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1068__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1069__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1069__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1069__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1080__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1082__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1082__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1083__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1083__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1083__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1083__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1084__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1084__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1084__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1084__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1085__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1086__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1086__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1087__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1087__d;
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
    vlSelf->__Vfunc_aes_mvm__992__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__992__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__992__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][1U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__992__vec_c = 0U;
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__992__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__992__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__992__vec_b)))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__992__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__992__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__992__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__992__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__992__Vfuncout = __Vfunc_aes_mvm__992__vec_c;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__991__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__991__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][1U] 
                                                >> 0x10U))));
    __Vfunc_aes_mvm__991__vec_c = 0U;
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__991__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__991__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__991__vec_b)))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__991__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__991__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__991__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__991__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__991__Vfuncout = __Vfunc_aes_mvm__991__vec_c;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__990__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__990__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][1U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__990__vec_c = 0U;
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__990__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__990__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__990__vec_b)))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__990__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__990__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__990__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__990__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__990__Vfuncout = __Vfunc_aes_mvm__990__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__990__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__991__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__992__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__995__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__995__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__995__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][1U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__995__vec_c = 0U;
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__995__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__995__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__995__vec_b)))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__995__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__995__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__995__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__995__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__995__Vfuncout = __Vfunc_aes_mvm__995__vec_c;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__994__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__994__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][1U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__994__vec_c = 0U;
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__994__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__994__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__994__vec_b)))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__994__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__994__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__994__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__994__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__994__Vfuncout = __Vfunc_aes_mvm__994__vec_c;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__993__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__993__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][1U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__993__vec_c = 0U;
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__993__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__993__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__993__vec_b)))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__993__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__993__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__993__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__993__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__993__Vfuncout = __Vfunc_aes_mvm__993__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__993__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__994__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__995__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1022__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1022__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1023__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1022__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1023__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1022__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1023__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1023__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1023__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1023__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1023__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1023__d)));
    __Vfunc_aes_mul_gf2p2__1023__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1023__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1023__d)));
    __Vfunc_aes_mul_gf2p2__1023__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1023__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1023__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1023__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1023__b)));
    __Vfunc_aes_mul_gf2p2__1023__Vfuncout = __Vfunc_aes_mul_gf2p2__1023__f;
    __Vfunc_aes_mul_gf2p4__1022__a = __Vfunc_aes_mul_gf2p2__1023__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1024__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1022__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1022__delta)));
    __Vfunc_aes_mul_gf2p2__1024__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1022__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1022__gamma)));
    __Vfunc_aes_mul_gf2p2__1024__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1024__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1024__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1024__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1024__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1024__d)));
    __Vfunc_aes_mul_gf2p2__1024__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1024__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1024__d)));
    __Vfunc_aes_mul_gf2p2__1024__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1024__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1024__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1024__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1024__b)));
    __Vfunc_aes_mul_gf2p2__1024__Vfuncout = __Vfunc_aes_mul_gf2p2__1024__f;
    __Vfunc_aes_mul_gf2p4__1022__b = __Vfunc_aes_mul_gf2p2__1024__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1025__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1022__delta));
    __Vfunc_aes_mul_gf2p2__1025__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1022__gamma));
    __Vfunc_aes_mul_gf2p2__1025__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1025__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1025__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1025__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1025__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1025__d)));
    __Vfunc_aes_mul_gf2p2__1025__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1025__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1025__d)));
    __Vfunc_aes_mul_gf2p2__1025__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1025__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1025__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1025__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1025__b)));
    __Vfunc_aes_mul_gf2p2__1025__Vfuncout = __Vfunc_aes_mul_gf2p2__1025__f;
    __Vfunc_aes_mul_gf2p4__1022__c = __Vfunc_aes_mul_gf2p2__1025__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1026__g = __Vfunc_aes_mul_gf2p4__1022__b;
    __Vfunc_aes_scale_omega2_gf2p2__1026__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1026__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1026__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1026__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1026__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1022__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1026__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1027__g = __Vfunc_aes_mul_gf2p4__1022__b;
    __Vfunc_aes_scale_omega2_gf2p2__1027__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1027__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1027__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1027__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1027__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1022__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1027__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1022__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1022__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1028__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1028__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1029__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1028__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1029__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1028__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1029__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1029__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1029__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1029__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1029__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1029__d)));
    __Vfunc_aes_mul_gf2p2__1029__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1029__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1029__d)));
    __Vfunc_aes_mul_gf2p2__1029__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1029__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1029__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1029__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1029__b)));
    __Vfunc_aes_mul_gf2p2__1029__Vfuncout = __Vfunc_aes_mul_gf2p2__1029__f;
    __Vfunc_aes_mul_gf2p4__1028__a = __Vfunc_aes_mul_gf2p2__1029__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1030__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1028__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1028__delta)));
    __Vfunc_aes_mul_gf2p2__1030__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1028__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1028__gamma)));
    __Vfunc_aes_mul_gf2p2__1030__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1030__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1030__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1030__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1030__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1030__d)));
    __Vfunc_aes_mul_gf2p2__1030__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1030__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1030__d)));
    __Vfunc_aes_mul_gf2p2__1030__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1030__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1030__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1030__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1030__b)));
    __Vfunc_aes_mul_gf2p2__1030__Vfuncout = __Vfunc_aes_mul_gf2p2__1030__f;
    __Vfunc_aes_mul_gf2p4__1028__b = __Vfunc_aes_mul_gf2p2__1030__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1031__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1028__delta));
    __Vfunc_aes_mul_gf2p2__1031__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1028__gamma));
    __Vfunc_aes_mul_gf2p2__1031__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1031__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1031__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1031__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1031__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1031__d)));
    __Vfunc_aes_mul_gf2p2__1031__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1031__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1031__d)));
    __Vfunc_aes_mul_gf2p2__1031__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1031__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1031__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1031__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1031__b)));
    __Vfunc_aes_mul_gf2p2__1031__Vfuncout = __Vfunc_aes_mul_gf2p2__1031__f;
    __Vfunc_aes_mul_gf2p4__1028__c = __Vfunc_aes_mul_gf2p2__1031__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1032__g = __Vfunc_aes_mul_gf2p4__1028__b;
    __Vfunc_aes_scale_omega2_gf2p2__1032__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1032__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1032__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1032__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1032__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1028__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1032__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1033__g = __Vfunc_aes_mul_gf2p4__1028__b;
    __Vfunc_aes_scale_omega2_gf2p2__1033__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1033__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1033__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1033__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1033__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1028__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1033__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1028__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1028__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1046__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1046__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1046__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1046__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1046__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1046__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1046__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1046__d)));
    __Vfunc_aes_mul_gf2p2__1046__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1046__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1046__d)));
    __Vfunc_aes_mul_gf2p2__1046__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1046__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1046__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1046__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1046__b)));
    __Vfunc_aes_mul_gf2p2__1046__Vfuncout = __Vfunc_aes_mul_gf2p2__1046__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1046__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1047__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1047__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1047__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1047__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1047__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1047__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1047__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1047__d)));
    __Vfunc_aes_mul_gf2p2__1047__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1047__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1047__d)));
    __Vfunc_aes_mul_gf2p2__1047__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1047__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1047__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1047__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1047__b)));
    __Vfunc_aes_mul_gf2p2__1047__Vfuncout = __Vfunc_aes_mul_gf2p2__1047__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1047__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1050__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1050__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1050__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1050__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1050__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1050__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1050__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1050__d)));
    __Vfunc_aes_mul_gf2p2__1050__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1050__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1050__d)));
    __Vfunc_aes_mul_gf2p2__1050__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1050__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1050__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1050__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1050__b)));
    __Vfunc_aes_mul_gf2p2__1050__Vfuncout = __Vfunc_aes_mul_gf2p2__1050__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1050__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1051__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1051__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1051__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1051__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1051__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1051__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1051__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1051__d)));
    __Vfunc_aes_mul_gf2p2__1051__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1051__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1051__d)));
    __Vfunc_aes_mul_gf2p2__1051__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1051__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1051__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1051__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1051__b)));
    __Vfunc_aes_mul_gf2p2__1051__Vfuncout = __Vfunc_aes_mul_gf2p2__1051__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1051__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1001__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1001__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1001__vec_c = 0U;
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1001__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1001__vec_b)))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1001__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1001__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1001__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1001__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1001__Vfuncout = __Vfunc_aes_mvm__1001__vec_c;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1000__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1000__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1000__vec_c = 0U;
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1000__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1000__vec_b)))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1000__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1000__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1000__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1000__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1000__Vfuncout = __Vfunc_aes_mvm__1000__vec_c;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__999__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__999__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__999__vec_c = 0U;
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__999__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__999__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__999__vec_b)))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__999__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__999__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__999__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__999__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__999__Vfuncout = __Vfunc_aes_mvm__999__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__999__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1000__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1001__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__998__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__998__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__998__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__998__vec_c = 0U;
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__998__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__998__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__998__vec_b)))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__998__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__998__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__998__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__998__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__998__Vfuncout = __Vfunc_aes_mvm__998__vec_c;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__997__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__997__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__997__vec_c = 0U;
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__997__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__997__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__997__vec_b)))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__997__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__997__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__997__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__997__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__997__Vfuncout = __Vfunc_aes_mvm__997__vec_c;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__996__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__996__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__996__vec_c = 0U;
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__996__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__996__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__996__vec_b)))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__996__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__996__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__996__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__996__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__996__Vfuncout = __Vfunc_aes_mvm__996__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__996__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__997__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__998__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1042__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1042__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1042__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1042__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1042__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1042__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1042__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1042__d)));
    __Vfunc_aes_mul_gf2p2__1042__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1042__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1042__d)));
    __Vfunc_aes_mul_gf2p2__1042__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1042__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1042__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1042__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1042__b)));
    __Vfunc_aes_mul_gf2p2__1042__Vfuncout = __Vfunc_aes_mul_gf2p2__1042__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1042__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1043__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1043__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1043__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1043__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1043__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1043__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1043__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1043__d)));
    __Vfunc_aes_mul_gf2p2__1043__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1043__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1043__d)));
    __Vfunc_aes_mul_gf2p2__1043__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1043__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1043__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1043__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1043__b)));
    __Vfunc_aes_mul_gf2p2__1043__Vfuncout = __Vfunc_aes_mul_gf2p2__1043__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1043__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma)));
    __Vfunc_aes_square_gf2p2__1003__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1002__gamma));
    __Vfunc_aes_square_gf2p2__1003__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1003__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1003__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1003__Vfuncout = __Vfunc_aes_square_gf2p2__1003__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b = __Vfunc_aes_square_gf2p2__1003__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1005__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__b;
    __Vfunc_aes_scale_omega_gf2p2__1005__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1005__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1005__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1005__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1005__d;
    __Vfunc_aes_square_gf2p2__1004__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__a;
    __Vfunc_aes_square_gf2p2__1004__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1004__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1004__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1004__Vfuncout = __Vfunc_aes_square_gf2p2__1004__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1004__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1005__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1002__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma)));
    __Vfunc_aes_square_gf2p2__1007__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1006__gamma));
    __Vfunc_aes_square_gf2p2__1007__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1007__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1007__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1007__Vfuncout = __Vfunc_aes_square_gf2p2__1007__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b = __Vfunc_aes_square_gf2p2__1007__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1009__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__b;
    __Vfunc_aes_scale_omega_gf2p2__1009__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1009__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1009__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1009__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1009__d;
    __Vfunc_aes_square_gf2p2__1008__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__a;
    __Vfunc_aes_square_gf2p2__1008__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1008__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1008__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1008__Vfuncout = __Vfunc_aes_square_gf2p2__1008__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1008__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1009__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1006__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1035__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1035__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1035__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1035__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1035__Vfuncout = __Vfunc_aes_square_gf2p2__1035__d;
    __Vfunc_aes_scale_omega2_gf2p2__1034__g = __Vfunc_aes_square_gf2p2__1035__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1034__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1034__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1034__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1034__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1034__Vfuncout;
    __Vfunc_aes_square_gf2p2__1037__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1037__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1037__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1037__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1037__Vfuncout = __Vfunc_aes_square_gf2p2__1037__d;
    __Vfunc_aes_scale_omega2_gf2p2__1036__g = __Vfunc_aes_square_gf2p2__1037__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1036__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1036__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1036__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1036__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1036__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1058__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1058__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1059__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1058__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1059__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1058__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1059__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1059__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1059__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1059__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1059__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1059__d)));
    __Vfunc_aes_mul_gf2p2__1059__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1059__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1059__d)));
    __Vfunc_aes_mul_gf2p2__1059__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1059__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1059__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1059__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1059__b)));
    __Vfunc_aes_mul_gf2p2__1059__Vfuncout = __Vfunc_aes_mul_gf2p2__1059__f;
    __Vfunc_aes_mul_gf2p4__1058__a = __Vfunc_aes_mul_gf2p2__1059__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1060__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1058__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1058__delta)));
    __Vfunc_aes_mul_gf2p2__1060__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1058__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1058__gamma)));
    __Vfunc_aes_mul_gf2p2__1060__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1060__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1060__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1060__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1060__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1060__d)));
    __Vfunc_aes_mul_gf2p2__1060__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1060__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1060__d)));
    __Vfunc_aes_mul_gf2p2__1060__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1060__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1060__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1060__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1060__b)));
    __Vfunc_aes_mul_gf2p2__1060__Vfuncout = __Vfunc_aes_mul_gf2p2__1060__f;
    __Vfunc_aes_mul_gf2p4__1058__b = __Vfunc_aes_mul_gf2p2__1060__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1061__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1058__delta));
    __Vfunc_aes_mul_gf2p2__1061__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1058__gamma));
    __Vfunc_aes_mul_gf2p2__1061__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1061__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1061__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1061__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1061__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1061__d)));
    __Vfunc_aes_mul_gf2p2__1061__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1061__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1061__d)));
    __Vfunc_aes_mul_gf2p2__1061__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1061__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1061__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1061__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1061__b)));
    __Vfunc_aes_mul_gf2p2__1061__Vfuncout = __Vfunc_aes_mul_gf2p2__1061__f;
    __Vfunc_aes_mul_gf2p4__1058__c = __Vfunc_aes_mul_gf2p2__1061__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1062__g = __Vfunc_aes_mul_gf2p4__1058__b;
    __Vfunc_aes_scale_omega2_gf2p2__1062__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1062__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1062__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1062__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1062__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1058__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1062__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1063__g = __Vfunc_aes_mul_gf2p4__1058__b;
    __Vfunc_aes_scale_omega2_gf2p2__1063__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1063__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1063__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1063__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1063__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1058__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1063__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1058__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1058__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1064__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1064__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1065__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1064__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1065__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1064__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1065__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1065__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1065__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1065__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1065__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1065__d)));
    __Vfunc_aes_mul_gf2p2__1065__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1065__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1065__d)));
    __Vfunc_aes_mul_gf2p2__1065__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1065__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1065__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1065__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1065__b)));
    __Vfunc_aes_mul_gf2p2__1065__Vfuncout = __Vfunc_aes_mul_gf2p2__1065__f;
    __Vfunc_aes_mul_gf2p4__1064__a = __Vfunc_aes_mul_gf2p2__1065__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1066__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1064__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1064__delta)));
    __Vfunc_aes_mul_gf2p2__1066__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1064__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1064__gamma)));
    __Vfunc_aes_mul_gf2p2__1066__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1066__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1066__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1066__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1066__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1066__d)));
    __Vfunc_aes_mul_gf2p2__1066__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1066__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1066__d)));
    __Vfunc_aes_mul_gf2p2__1066__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1066__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1066__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1066__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1066__b)));
    __Vfunc_aes_mul_gf2p2__1066__Vfuncout = __Vfunc_aes_mul_gf2p2__1066__f;
    __Vfunc_aes_mul_gf2p4__1064__b = __Vfunc_aes_mul_gf2p2__1066__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1067__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1064__delta));
    __Vfunc_aes_mul_gf2p2__1067__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1064__gamma));
    __Vfunc_aes_mul_gf2p2__1067__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1067__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1067__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1067__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1067__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1067__d)));
    __Vfunc_aes_mul_gf2p2__1067__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1067__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1067__d)));
    __Vfunc_aes_mul_gf2p2__1067__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1067__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1067__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1067__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1067__b)));
    __Vfunc_aes_mul_gf2p2__1067__Vfuncout = __Vfunc_aes_mul_gf2p2__1067__f;
    __Vfunc_aes_mul_gf2p4__1064__c = __Vfunc_aes_mul_gf2p2__1067__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1068__g = __Vfunc_aes_mul_gf2p4__1064__b;
    __Vfunc_aes_scale_omega2_gf2p2__1068__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1068__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1068__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1068__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1068__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1064__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1068__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1069__g = __Vfunc_aes_mul_gf2p4__1064__b;
    __Vfunc_aes_scale_omega2_gf2p2__1069__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1069__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1069__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1069__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1069__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1064__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1069__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1064__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1064__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1082__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1082__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1083__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1082__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1083__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1082__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1083__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1083__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1083__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1083__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1083__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1083__d)));
    __Vfunc_aes_mul_gf2p2__1083__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1083__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1083__d)));
    __Vfunc_aes_mul_gf2p2__1083__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1083__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1083__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1083__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1083__b)));
    __Vfunc_aes_mul_gf2p2__1083__Vfuncout = __Vfunc_aes_mul_gf2p2__1083__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__a = __Vfunc_aes_mul_gf2p2__1083__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1084__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1082__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1082__delta)));
    __Vfunc_aes_mul_gf2p2__1084__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1082__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1082__gamma)));
    __Vfunc_aes_mul_gf2p2__1084__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1084__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1084__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1084__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1084__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1084__d)));
    __Vfunc_aes_mul_gf2p2__1084__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1084__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1084__d)));
    __Vfunc_aes_mul_gf2p2__1084__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1084__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1084__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1084__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1084__b)));
    __Vfunc_aes_mul_gf2p2__1084__Vfuncout = __Vfunc_aes_mul_gf2p2__1084__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__b = __Vfunc_aes_mul_gf2p2__1084__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1085__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1082__delta));
    __Vfunc_aes_mul_gf2p2__1085__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1082__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1085__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1085__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1085__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1085__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1085__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1085__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1085__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1085__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1085__d)));
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
}
