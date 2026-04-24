// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__21(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__21\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1100__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1100__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1100__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1101__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1101__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1101__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1102__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1102__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1102__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1103__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1103__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1103__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1104__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1104__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1104__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1105__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1105__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1105__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1106__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1106__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1106__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1107__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1107__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1107__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1108__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1108__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1108__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1109__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1109__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1109__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1110__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1110__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1110__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1111__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1111__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1111__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1114__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1114__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1114__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1115__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1115__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1118__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1118__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1118__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1119__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1119__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1136__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1136__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1137__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1137__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1142__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1142__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1143__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1143__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1148__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1149__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1172__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1172__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1173__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1173__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1178__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1178__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1179__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1179__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1190__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1192__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1196__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1196__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1197__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1197__d;
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
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1102__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1102__vec_c = 0U;
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1102__Vfuncout = __Vfunc_aes_mvm__1102__vec_c;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1101__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][2U] 
                                                   >> 0x10U))));
    __Vfunc_aes_mvm__1101__vec_c = 0U;
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1101__Vfuncout = __Vfunc_aes_mvm__1101__vec_c;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1100__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1100__vec_c = 0U;
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1100__Vfuncout = __Vfunc_aes_mvm__1100__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1100__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1101__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1102__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1105__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1105__vec_c = 0U;
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1105__Vfuncout = __Vfunc_aes_mvm__1105__vec_c;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1104__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1104__vec_c = 0U;
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1104__Vfuncout = __Vfunc_aes_mvm__1104__vec_c;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1103__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1103__vec_c = 0U;
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1103__Vfuncout = __Vfunc_aes_mvm__1103__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1103__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1104__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1105__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1132__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1132__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1133__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1132__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1133__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1132__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1133__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1133__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1133__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1133__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1133__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1133__d)));
    __Vfunc_aes_mul_gf2p2__1133__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1133__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1133__d)));
    __Vfunc_aes_mul_gf2p2__1133__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1133__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1133__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1133__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1133__b)));
    __Vfunc_aes_mul_gf2p2__1133__Vfuncout = __Vfunc_aes_mul_gf2p2__1133__f;
    __Vfunc_aes_mul_gf2p4__1132__a = __Vfunc_aes_mul_gf2p2__1133__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1134__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1132__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1132__delta)));
    __Vfunc_aes_mul_gf2p2__1134__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1132__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1132__gamma)));
    __Vfunc_aes_mul_gf2p2__1134__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1134__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1134__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1134__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1134__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1134__d)));
    __Vfunc_aes_mul_gf2p2__1134__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1134__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1134__d)));
    __Vfunc_aes_mul_gf2p2__1134__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1134__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1134__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1134__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1134__b)));
    __Vfunc_aes_mul_gf2p2__1134__Vfuncout = __Vfunc_aes_mul_gf2p2__1134__f;
    __Vfunc_aes_mul_gf2p4__1132__b = __Vfunc_aes_mul_gf2p2__1134__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1135__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1132__delta));
    __Vfunc_aes_mul_gf2p2__1135__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1132__gamma));
    __Vfunc_aes_mul_gf2p2__1135__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1135__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1135__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1135__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1135__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1135__d)));
    __Vfunc_aes_mul_gf2p2__1135__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1135__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1135__d)));
    __Vfunc_aes_mul_gf2p2__1135__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1135__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1135__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1135__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1135__b)));
    __Vfunc_aes_mul_gf2p2__1135__Vfuncout = __Vfunc_aes_mul_gf2p2__1135__f;
    __Vfunc_aes_mul_gf2p4__1132__c = __Vfunc_aes_mul_gf2p2__1135__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1136__g = __Vfunc_aes_mul_gf2p4__1132__b;
    __Vfunc_aes_scale_omega2_gf2p2__1136__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1136__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1136__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1136__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1132__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1137__g = __Vfunc_aes_mul_gf2p4__1132__b;
    __Vfunc_aes_scale_omega2_gf2p2__1137__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1137__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1137__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1137__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1132__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1132__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1132__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1138__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1138__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1139__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1138__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1139__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1138__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1139__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1139__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1139__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1139__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1139__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1139__d)));
    __Vfunc_aes_mul_gf2p2__1139__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1139__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1139__d)));
    __Vfunc_aes_mul_gf2p2__1139__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1139__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1139__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1139__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1139__b)));
    __Vfunc_aes_mul_gf2p2__1139__Vfuncout = __Vfunc_aes_mul_gf2p2__1139__f;
    __Vfunc_aes_mul_gf2p4__1138__a = __Vfunc_aes_mul_gf2p2__1139__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1140__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1138__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1138__delta)));
    __Vfunc_aes_mul_gf2p2__1140__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1138__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1138__gamma)));
    __Vfunc_aes_mul_gf2p2__1140__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1140__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1140__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1140__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1140__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1140__d)));
    __Vfunc_aes_mul_gf2p2__1140__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1140__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1140__d)));
    __Vfunc_aes_mul_gf2p2__1140__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1140__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1140__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1140__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1140__b)));
    __Vfunc_aes_mul_gf2p2__1140__Vfuncout = __Vfunc_aes_mul_gf2p2__1140__f;
    __Vfunc_aes_mul_gf2p4__1138__b = __Vfunc_aes_mul_gf2p2__1140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1141__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1138__delta));
    __Vfunc_aes_mul_gf2p2__1141__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1138__gamma));
    __Vfunc_aes_mul_gf2p2__1141__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1141__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1141__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1141__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1141__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1141__d)));
    __Vfunc_aes_mul_gf2p2__1141__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1141__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1141__d)));
    __Vfunc_aes_mul_gf2p2__1141__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1141__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1141__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1141__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1141__b)));
    __Vfunc_aes_mul_gf2p2__1141__Vfuncout = __Vfunc_aes_mul_gf2p2__1141__f;
    __Vfunc_aes_mul_gf2p4__1138__c = __Vfunc_aes_mul_gf2p2__1141__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1142__g = __Vfunc_aes_mul_gf2p4__1138__b;
    __Vfunc_aes_scale_omega2_gf2p2__1142__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1142__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1142__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1142__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1138__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1143__g = __Vfunc_aes_mul_gf2p4__1138__b;
    __Vfunc_aes_scale_omega2_gf2p2__1143__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1143__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1143__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1143__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1138__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1138__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1138__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1156__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1156__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1156__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1156__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1156__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1156__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1156__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1156__d)));
    __Vfunc_aes_mul_gf2p2__1156__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1156__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1156__d)));
    __Vfunc_aes_mul_gf2p2__1156__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1156__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1156__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1156__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1156__b)));
    __Vfunc_aes_mul_gf2p2__1156__Vfuncout = __Vfunc_aes_mul_gf2p2__1156__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1156__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1157__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1157__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1157__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1157__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1157__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1157__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1157__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1157__d)));
    __Vfunc_aes_mul_gf2p2__1157__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1157__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1157__d)));
    __Vfunc_aes_mul_gf2p2__1157__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1157__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1157__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1157__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1157__b)));
    __Vfunc_aes_mul_gf2p2__1157__Vfuncout = __Vfunc_aes_mul_gf2p2__1157__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1157__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1160__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1160__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1160__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1160__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1160__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1160__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1160__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1160__d)));
    __Vfunc_aes_mul_gf2p2__1160__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1160__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1160__d)));
    __Vfunc_aes_mul_gf2p2__1160__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1160__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1160__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1160__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1160__b)));
    __Vfunc_aes_mul_gf2p2__1160__Vfuncout = __Vfunc_aes_mul_gf2p2__1160__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1161__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1161__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1161__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1161__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1161__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1161__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1161__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1161__d)));
    __Vfunc_aes_mul_gf2p2__1161__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1161__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1161__d)));
    __Vfunc_aes_mul_gf2p2__1161__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1161__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1161__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1161__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1161__b)));
    __Vfunc_aes_mul_gf2p2__1161__Vfuncout = __Vfunc_aes_mul_gf2p2__1161__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1161__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1111__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1111__vec_c = 0U;
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1111__Vfuncout = __Vfunc_aes_mvm__1111__vec_c;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1110__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1110__vec_c = 0U;
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1110__Vfuncout = __Vfunc_aes_mvm__1110__vec_c;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1109__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1109__vec_c = 0U;
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1109__Vfuncout = __Vfunc_aes_mvm__1109__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1109__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1110__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1111__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1108__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1108__vec_c = 0U;
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1108__Vfuncout = __Vfunc_aes_mvm__1108__vec_c;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1107__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1107__vec_c = 0U;
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1107__Vfuncout = __Vfunc_aes_mvm__1107__vec_c;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1106__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1106__vec_c = 0U;
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1106__Vfuncout = __Vfunc_aes_mvm__1106__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1106__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1107__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1108__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1152__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1152__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1152__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1152__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1152__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1152__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1152__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1152__d)));
    __Vfunc_aes_mul_gf2p2__1152__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1152__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1152__d)));
    __Vfunc_aes_mul_gf2p2__1152__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1152__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1152__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1152__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1152__b)));
    __Vfunc_aes_mul_gf2p2__1152__Vfuncout = __Vfunc_aes_mul_gf2p2__1152__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1152__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1153__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1153__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1153__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1153__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1153__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1153__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1153__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1153__d)));
    __Vfunc_aes_mul_gf2p2__1153__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1153__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1153__d)));
    __Vfunc_aes_mul_gf2p2__1153__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1153__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1153__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1153__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1153__b)));
    __Vfunc_aes_mul_gf2p2__1153__Vfuncout = __Vfunc_aes_mul_gf2p2__1153__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1153__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma)));
    __Vfunc_aes_square_gf2p2__1113__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma));
    __Vfunc_aes_square_gf2p2__1113__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1113__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1113__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1113__Vfuncout = __Vfunc_aes_square_gf2p2__1113__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b = __Vfunc_aes_square_gf2p2__1113__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1115__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b;
    __Vfunc_aes_scale_omega_gf2p2__1115__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1115__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1115__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1115__d;
    __Vfunc_aes_square_gf2p2__1114__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a;
    __Vfunc_aes_square_gf2p2__1114__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1114__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1114__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1114__Vfuncout = __Vfunc_aes_square_gf2p2__1114__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1114__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma)));
    __Vfunc_aes_square_gf2p2__1117__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma));
    __Vfunc_aes_square_gf2p2__1117__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1117__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1117__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1117__Vfuncout = __Vfunc_aes_square_gf2p2__1117__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b = __Vfunc_aes_square_gf2p2__1117__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1119__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b;
    __Vfunc_aes_scale_omega_gf2p2__1119__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1119__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1119__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1119__d;
    __Vfunc_aes_square_gf2p2__1118__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a;
    __Vfunc_aes_square_gf2p2__1118__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1118__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1118__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1118__Vfuncout = __Vfunc_aes_square_gf2p2__1118__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1118__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1145__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1145__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1145__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1145__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1145__Vfuncout = __Vfunc_aes_square_gf2p2__1145__d;
    __Vfunc_aes_scale_omega2_gf2p2__1144__g = __Vfunc_aes_square_gf2p2__1145__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1144__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1144__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1144__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1144__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout;
    __Vfunc_aes_square_gf2p2__1147__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1147__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1147__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1147__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1147__Vfuncout = __Vfunc_aes_square_gf2p2__1147__d;
    __Vfunc_aes_scale_omega2_gf2p2__1146__g = __Vfunc_aes_square_gf2p2__1147__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1146__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1146__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1146__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1146__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1168__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1168__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1169__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1168__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1169__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1168__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1169__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1169__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1169__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1169__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1169__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1169__d)));
    __Vfunc_aes_mul_gf2p2__1169__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1169__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1169__d)));
    __Vfunc_aes_mul_gf2p2__1169__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1169__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1169__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1169__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1169__b)));
    __Vfunc_aes_mul_gf2p2__1169__Vfuncout = __Vfunc_aes_mul_gf2p2__1169__f;
    __Vfunc_aes_mul_gf2p4__1168__a = __Vfunc_aes_mul_gf2p2__1169__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1170__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1168__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1168__delta)));
    __Vfunc_aes_mul_gf2p2__1170__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1168__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1168__gamma)));
    __Vfunc_aes_mul_gf2p2__1170__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1170__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1170__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1170__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1170__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1170__d)));
    __Vfunc_aes_mul_gf2p2__1170__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1170__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1170__d)));
    __Vfunc_aes_mul_gf2p2__1170__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1170__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1170__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1170__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1170__b)));
    __Vfunc_aes_mul_gf2p2__1170__Vfuncout = __Vfunc_aes_mul_gf2p2__1170__f;
    __Vfunc_aes_mul_gf2p4__1168__b = __Vfunc_aes_mul_gf2p2__1170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1171__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1168__delta));
    __Vfunc_aes_mul_gf2p2__1171__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1168__gamma));
    __Vfunc_aes_mul_gf2p2__1171__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1171__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1171__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1171__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1171__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1171__d)));
    __Vfunc_aes_mul_gf2p2__1171__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1171__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1171__d)));
    __Vfunc_aes_mul_gf2p2__1171__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1171__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1171__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1171__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1171__b)));
    __Vfunc_aes_mul_gf2p2__1171__Vfuncout = __Vfunc_aes_mul_gf2p2__1171__f;
    __Vfunc_aes_mul_gf2p4__1168__c = __Vfunc_aes_mul_gf2p2__1171__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1172__g = __Vfunc_aes_mul_gf2p4__1168__b;
    __Vfunc_aes_scale_omega2_gf2p2__1172__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1172__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1172__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1172__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1168__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1173__g = __Vfunc_aes_mul_gf2p4__1168__b;
    __Vfunc_aes_scale_omega2_gf2p2__1173__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1173__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1173__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1173__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1168__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1168__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1168__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1174__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1174__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1175__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1174__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1175__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1174__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1175__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1175__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1175__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1175__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1175__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1175__d)));
    __Vfunc_aes_mul_gf2p2__1175__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1175__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1175__d)));
    __Vfunc_aes_mul_gf2p2__1175__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1175__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1175__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1175__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1175__b)));
    __Vfunc_aes_mul_gf2p2__1175__Vfuncout = __Vfunc_aes_mul_gf2p2__1175__f;
    __Vfunc_aes_mul_gf2p4__1174__a = __Vfunc_aes_mul_gf2p2__1175__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1176__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1174__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1174__delta)));
    __Vfunc_aes_mul_gf2p2__1176__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1174__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1174__gamma)));
    __Vfunc_aes_mul_gf2p2__1176__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1176__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1176__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1176__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1176__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1176__d)));
    __Vfunc_aes_mul_gf2p2__1176__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1176__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1176__d)));
    __Vfunc_aes_mul_gf2p2__1176__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1176__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1176__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1176__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1176__b)));
    __Vfunc_aes_mul_gf2p2__1176__Vfuncout = __Vfunc_aes_mul_gf2p2__1176__f;
    __Vfunc_aes_mul_gf2p4__1174__b = __Vfunc_aes_mul_gf2p2__1176__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1177__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1174__delta));
    __Vfunc_aes_mul_gf2p2__1177__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1174__gamma));
    __Vfunc_aes_mul_gf2p2__1177__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1177__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1177__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1177__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1177__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1177__d)));
    __Vfunc_aes_mul_gf2p2__1177__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1177__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1177__d)));
    __Vfunc_aes_mul_gf2p2__1177__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1177__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1177__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1177__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1177__b)));
    __Vfunc_aes_mul_gf2p2__1177__Vfuncout = __Vfunc_aes_mul_gf2p2__1177__f;
    __Vfunc_aes_mul_gf2p4__1174__c = __Vfunc_aes_mul_gf2p2__1177__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1178__g = __Vfunc_aes_mul_gf2p4__1174__b;
    __Vfunc_aes_scale_omega2_gf2p2__1178__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1178__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1178__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1178__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1174__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1179__g = __Vfunc_aes_mul_gf2p4__1174__b;
    __Vfunc_aes_scale_omega2_gf2p2__1179__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1179__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1179__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1179__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1174__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1174__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1174__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1192__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1192__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1193__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1192__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1193__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1192__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1193__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1193__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1193__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1193__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1193__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1193__d)));
    __Vfunc_aes_mul_gf2p2__1193__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1193__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1193__d)));
    __Vfunc_aes_mul_gf2p2__1193__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1193__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1193__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1193__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1193__b)));
    __Vfunc_aes_mul_gf2p2__1193__Vfuncout = __Vfunc_aes_mul_gf2p2__1193__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__a = __Vfunc_aes_mul_gf2p2__1193__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1194__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1192__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1192__delta)));
    __Vfunc_aes_mul_gf2p2__1194__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1192__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1192__gamma)));
    __Vfunc_aes_mul_gf2p2__1194__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1194__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1194__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1194__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1194__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1194__d)));
    __Vfunc_aes_mul_gf2p2__1194__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1194__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1194__d)));
    __Vfunc_aes_mul_gf2p2__1194__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1194__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1194__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1194__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1194__b)));
    __Vfunc_aes_mul_gf2p2__1194__Vfuncout = __Vfunc_aes_mul_gf2p2__1194__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__b = __Vfunc_aes_mul_gf2p2__1194__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1195__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1192__delta));
    __Vfunc_aes_mul_gf2p2__1195__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1192__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1195__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1195__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1195__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1195__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1195__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1195__d)));
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
}
