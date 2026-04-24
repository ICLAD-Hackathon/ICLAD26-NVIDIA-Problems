// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__23(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__23\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1210__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1210__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1210__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1211__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1211__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1211__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1212__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1212__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1212__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1213__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1213__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1213__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1214__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1214__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1214__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1215__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1215__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1215__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1216__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1216__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1216__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1217__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1217__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1217__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1218__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1218__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1218__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1219__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1219__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1219__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1220__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1220__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1220__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1221__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1221__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1221__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1224__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1224__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1224__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1225__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1225__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1228__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1228__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1228__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1229__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1229__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1246__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1246__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1247__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1247__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1252__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1252__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1253__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1253__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__c;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1282__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1282__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1283__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1283__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1288__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1288__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1289__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1289__d;
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
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1300__g;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1302__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__f;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1306__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1306__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1307__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1307__d;
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
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1212__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1212__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1212__vec_c = 0U;
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1212__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1212__vec_b)))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1212__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1212__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1212__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1212__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1212__Vfuncout = __Vfunc_aes_mvm__1212__vec_c;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1211__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1211__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][3U] 
                                                   >> 0x10U))));
    __Vfunc_aes_mvm__1211__vec_c = 0U;
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1211__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1211__vec_b)))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1211__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1211__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1211__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1211__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1211__Vfuncout = __Vfunc_aes_mvm__1211__vec_c;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1210__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1210__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1210__vec_c = 0U;
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1210__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1210__vec_b)))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1210__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1210__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1210__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1210__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1210__Vfuncout = __Vfunc_aes_mvm__1210__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1210__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1211__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1212__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1215__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1215__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1215__vec_c = 0U;
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1215__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1215__vec_b)))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1215__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1215__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1215__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1215__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1215__Vfuncout = __Vfunc_aes_mvm__1215__vec_c;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1214__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1214__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1214__vec_c = 0U;
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1214__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1214__vec_b)))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1214__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1214__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1214__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1214__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1214__Vfuncout = __Vfunc_aes_mvm__1214__vec_c;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1213__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1213__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][3U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1213__vec_c = 0U;
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1213__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1213__vec_b)))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1213__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1213__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1213__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1213__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1213__Vfuncout = __Vfunc_aes_mvm__1213__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1213__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1214__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1215__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1242__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1242__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1243__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1242__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1243__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1242__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1243__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1243__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1243__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1243__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1243__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1243__d)));
    __Vfunc_aes_mul_gf2p2__1243__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1243__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1243__d)));
    __Vfunc_aes_mul_gf2p2__1243__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1243__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1243__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1243__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1243__b)));
    __Vfunc_aes_mul_gf2p2__1243__Vfuncout = __Vfunc_aes_mul_gf2p2__1243__f;
    __Vfunc_aes_mul_gf2p4__1242__a = __Vfunc_aes_mul_gf2p2__1243__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1244__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1242__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1242__delta)));
    __Vfunc_aes_mul_gf2p2__1244__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1242__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1242__gamma)));
    __Vfunc_aes_mul_gf2p2__1244__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1244__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1244__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1244__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1244__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1244__d)));
    __Vfunc_aes_mul_gf2p2__1244__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1244__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1244__d)));
    __Vfunc_aes_mul_gf2p2__1244__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1244__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1244__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1244__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1244__b)));
    __Vfunc_aes_mul_gf2p2__1244__Vfuncout = __Vfunc_aes_mul_gf2p2__1244__f;
    __Vfunc_aes_mul_gf2p4__1242__b = __Vfunc_aes_mul_gf2p2__1244__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1245__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1242__delta));
    __Vfunc_aes_mul_gf2p2__1245__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1242__gamma));
    __Vfunc_aes_mul_gf2p2__1245__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1245__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1245__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1245__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1245__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1245__d)));
    __Vfunc_aes_mul_gf2p2__1245__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1245__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1245__d)));
    __Vfunc_aes_mul_gf2p2__1245__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1245__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1245__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1245__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1245__b)));
    __Vfunc_aes_mul_gf2p2__1245__Vfuncout = __Vfunc_aes_mul_gf2p2__1245__f;
    __Vfunc_aes_mul_gf2p4__1242__c = __Vfunc_aes_mul_gf2p2__1245__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1246__g = __Vfunc_aes_mul_gf2p4__1242__b;
    __Vfunc_aes_scale_omega2_gf2p2__1246__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1246__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1246__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1246__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1242__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1247__g = __Vfunc_aes_mul_gf2p4__1242__b;
    __Vfunc_aes_scale_omega2_gf2p2__1247__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1247__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1247__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1247__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1242__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1242__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1242__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1248__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1248__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1249__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1248__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1249__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1248__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1249__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1249__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1249__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1249__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1249__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1249__d)));
    __Vfunc_aes_mul_gf2p2__1249__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1249__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1249__d)));
    __Vfunc_aes_mul_gf2p2__1249__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1249__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1249__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1249__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1249__b)));
    __Vfunc_aes_mul_gf2p2__1249__Vfuncout = __Vfunc_aes_mul_gf2p2__1249__f;
    __Vfunc_aes_mul_gf2p4__1248__a = __Vfunc_aes_mul_gf2p2__1249__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1250__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1248__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1248__delta)));
    __Vfunc_aes_mul_gf2p2__1250__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1248__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1248__gamma)));
    __Vfunc_aes_mul_gf2p2__1250__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1250__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1250__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1250__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1250__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1250__d)));
    __Vfunc_aes_mul_gf2p2__1250__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1250__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1250__d)));
    __Vfunc_aes_mul_gf2p2__1250__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1250__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1250__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1250__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1250__b)));
    __Vfunc_aes_mul_gf2p2__1250__Vfuncout = __Vfunc_aes_mul_gf2p2__1250__f;
    __Vfunc_aes_mul_gf2p4__1248__b = __Vfunc_aes_mul_gf2p2__1250__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1251__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1248__delta));
    __Vfunc_aes_mul_gf2p2__1251__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1248__gamma));
    __Vfunc_aes_mul_gf2p2__1251__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1251__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1251__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1251__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1251__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1251__d)));
    __Vfunc_aes_mul_gf2p2__1251__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1251__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1251__d)));
    __Vfunc_aes_mul_gf2p2__1251__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1251__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1251__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1251__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1251__b)));
    __Vfunc_aes_mul_gf2p2__1251__Vfuncout = __Vfunc_aes_mul_gf2p2__1251__f;
    __Vfunc_aes_mul_gf2p4__1248__c = __Vfunc_aes_mul_gf2p2__1251__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1252__g = __Vfunc_aes_mul_gf2p4__1248__b;
    __Vfunc_aes_scale_omega2_gf2p2__1252__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1252__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1252__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1252__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1248__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1253__g = __Vfunc_aes_mul_gf2p4__1248__b;
    __Vfunc_aes_scale_omega2_gf2p2__1253__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1253__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1253__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1253__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1248__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1248__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1248__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1266__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1266__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1266__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1266__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1266__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1266__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1266__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1266__d)));
    __Vfunc_aes_mul_gf2p2__1266__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1266__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1266__d)));
    __Vfunc_aes_mul_gf2p2__1266__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1266__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1266__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1266__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1266__b)));
    __Vfunc_aes_mul_gf2p2__1266__Vfuncout = __Vfunc_aes_mul_gf2p2__1266__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1266__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1267__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1267__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1267__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1267__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1267__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1267__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1267__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1267__d)));
    __Vfunc_aes_mul_gf2p2__1267__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1267__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1267__d)));
    __Vfunc_aes_mul_gf2p2__1267__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1267__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1267__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1267__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1267__b)));
    __Vfunc_aes_mul_gf2p2__1267__Vfuncout = __Vfunc_aes_mul_gf2p2__1267__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1267__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1270__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1270__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1270__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1270__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1270__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1270__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1270__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1270__d)));
    __Vfunc_aes_mul_gf2p2__1270__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1270__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1270__d)));
    __Vfunc_aes_mul_gf2p2__1270__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1270__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1270__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1270__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1270__b)));
    __Vfunc_aes_mul_gf2p2__1270__Vfuncout = __Vfunc_aes_mul_gf2p2__1270__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1270__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1271__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1271__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1271__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1271__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1271__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1271__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1271__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1271__d)));
    __Vfunc_aes_mul_gf2p2__1271__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1271__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1271__d)));
    __Vfunc_aes_mul_gf2p2__1271__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1271__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1271__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1271__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1271__b)));
    __Vfunc_aes_mul_gf2p2__1271__Vfuncout = __Vfunc_aes_mul_gf2p2__1271__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1271__Vfuncout;
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
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1221__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1221__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1221__vec_c = 0U;
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1221__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1221__vec_b)))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1221__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1221__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1221__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1221__Vfuncout = __Vfunc_aes_mvm__1221__vec_c;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1220__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1220__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1220__vec_c = 0U;
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1220__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1220__vec_b)))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1220__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1220__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1220__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1220__Vfuncout = __Vfunc_aes_mvm__1220__vec_c;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1219__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1219__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1219__vec_c = 0U;
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1219__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1219__vec_b)))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1219__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1219__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1219__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1219__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1219__Vfuncout = __Vfunc_aes_mvm__1219__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1219__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1220__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1221__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1218__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1218__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1218__vec_c = 0U;
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1218__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1218__vec_b)))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1218__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1218__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1218__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1218__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1218__Vfuncout = __Vfunc_aes_mvm__1218__vec_c;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1217__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1217__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1217__vec_c = 0U;
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1217__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1217__vec_b)))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1217__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1217__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1217__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1217__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1217__Vfuncout = __Vfunc_aes_mvm__1217__vec_c;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1216__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1216__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1216__vec_c = 0U;
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1216__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1216__vec_b)))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1216__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1216__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1216__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1216__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1216__Vfuncout = __Vfunc_aes_mvm__1216__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1216__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1217__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1218__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1262__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1262__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1262__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1262__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1262__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1262__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1262__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1262__d)));
    __Vfunc_aes_mul_gf2p2__1262__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1262__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1262__d)));
    __Vfunc_aes_mul_gf2p2__1262__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1262__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1262__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1262__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1262__b)));
    __Vfunc_aes_mul_gf2p2__1262__Vfuncout = __Vfunc_aes_mul_gf2p2__1262__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1262__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1263__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1263__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1263__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1263__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1263__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1263__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1263__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1263__d)));
    __Vfunc_aes_mul_gf2p2__1263__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1263__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1263__d)));
    __Vfunc_aes_mul_gf2p2__1263__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1263__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1263__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1263__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1263__b)));
    __Vfunc_aes_mul_gf2p2__1263__Vfuncout = __Vfunc_aes_mul_gf2p2__1263__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1263__Vfuncout;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelf->out_req_o) & (3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))
            ? 0U : (7U & ((IData)(vlSelf->out_req_o)
                           ? (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((3U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en))
                               ? ((IData)(1U) + (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q))
                               : (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma)));
    __Vfunc_aes_square_gf2p2__1223__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma));
    __Vfunc_aes_square_gf2p2__1223__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1223__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1223__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1223__Vfuncout = __Vfunc_aes_square_gf2p2__1223__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b = __Vfunc_aes_square_gf2p2__1223__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1225__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b;
    __Vfunc_aes_scale_omega_gf2p2__1225__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1225__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1225__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1225__d;
    __Vfunc_aes_square_gf2p2__1224__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a;
    __Vfunc_aes_square_gf2p2__1224__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1224__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1224__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1224__Vfuncout = __Vfunc_aes_square_gf2p2__1224__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1224__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma)));
    __Vfunc_aes_square_gf2p2__1227__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma));
    __Vfunc_aes_square_gf2p2__1227__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1227__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1227__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1227__Vfuncout = __Vfunc_aes_square_gf2p2__1227__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b = __Vfunc_aes_square_gf2p2__1227__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1229__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b;
    __Vfunc_aes_scale_omega_gf2p2__1229__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1229__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1229__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1229__d;
    __Vfunc_aes_square_gf2p2__1228__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a;
    __Vfunc_aes_square_gf2p2__1228__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1228__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1228__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1228__Vfuncout = __Vfunc_aes_square_gf2p2__1228__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1228__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1255__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1255__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1255__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1255__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1255__Vfuncout = __Vfunc_aes_square_gf2p2__1255__d;
    __Vfunc_aes_scale_omega2_gf2p2__1254__g = __Vfunc_aes_square_gf2p2__1255__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1254__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1254__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1254__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1254__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout;
    __Vfunc_aes_square_gf2p2__1257__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1257__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1257__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1257__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1257__Vfuncout = __Vfunc_aes_square_gf2p2__1257__d;
    __Vfunc_aes_scale_omega2_gf2p2__1256__g = __Vfunc_aes_square_gf2p2__1257__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1256__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1256__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1256__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1256__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1278__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1278__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1279__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1278__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1279__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1278__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1279__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1279__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1279__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1279__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1279__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1279__d)));
    __Vfunc_aes_mul_gf2p2__1279__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1279__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1279__d)));
    __Vfunc_aes_mul_gf2p2__1279__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1279__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1279__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1279__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1279__b)));
    __Vfunc_aes_mul_gf2p2__1279__Vfuncout = __Vfunc_aes_mul_gf2p2__1279__f;
    __Vfunc_aes_mul_gf2p4__1278__a = __Vfunc_aes_mul_gf2p2__1279__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1280__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1278__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1278__delta)));
    __Vfunc_aes_mul_gf2p2__1280__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1278__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1278__gamma)));
    __Vfunc_aes_mul_gf2p2__1280__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1280__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1280__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1280__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1280__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1280__d)));
    __Vfunc_aes_mul_gf2p2__1280__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1280__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1280__d)));
    __Vfunc_aes_mul_gf2p2__1280__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1280__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1280__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1280__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1280__b)));
    __Vfunc_aes_mul_gf2p2__1280__Vfuncout = __Vfunc_aes_mul_gf2p2__1280__f;
    __Vfunc_aes_mul_gf2p4__1278__b = __Vfunc_aes_mul_gf2p2__1280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1281__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1278__delta));
    __Vfunc_aes_mul_gf2p2__1281__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1278__gamma));
    __Vfunc_aes_mul_gf2p2__1281__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1281__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1281__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1281__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1281__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1281__d)));
    __Vfunc_aes_mul_gf2p2__1281__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1281__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1281__d)));
    __Vfunc_aes_mul_gf2p2__1281__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1281__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1281__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1281__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1281__b)));
    __Vfunc_aes_mul_gf2p2__1281__Vfuncout = __Vfunc_aes_mul_gf2p2__1281__f;
    __Vfunc_aes_mul_gf2p4__1278__c = __Vfunc_aes_mul_gf2p2__1281__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1282__g = __Vfunc_aes_mul_gf2p4__1278__b;
    __Vfunc_aes_scale_omega2_gf2p2__1282__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1282__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1282__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1282__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1278__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1283__g = __Vfunc_aes_mul_gf2p4__1278__b;
    __Vfunc_aes_scale_omega2_gf2p2__1283__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1283__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1283__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1283__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1278__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1278__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1278__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1284__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1284__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1285__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1284__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1285__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1284__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1285__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1285__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1285__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1285__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1285__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1285__d)));
    __Vfunc_aes_mul_gf2p2__1285__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1285__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1285__d)));
    __Vfunc_aes_mul_gf2p2__1285__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1285__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1285__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1285__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1285__b)));
    __Vfunc_aes_mul_gf2p2__1285__Vfuncout = __Vfunc_aes_mul_gf2p2__1285__f;
    __Vfunc_aes_mul_gf2p4__1284__a = __Vfunc_aes_mul_gf2p2__1285__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1286__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1284__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1284__delta)));
    __Vfunc_aes_mul_gf2p2__1286__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1284__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1284__gamma)));
    __Vfunc_aes_mul_gf2p2__1286__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1286__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1286__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1286__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1286__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1286__d)));
    __Vfunc_aes_mul_gf2p2__1286__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1286__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1286__d)));
    __Vfunc_aes_mul_gf2p2__1286__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1286__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1286__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1286__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1286__b)));
    __Vfunc_aes_mul_gf2p2__1286__Vfuncout = __Vfunc_aes_mul_gf2p2__1286__f;
    __Vfunc_aes_mul_gf2p4__1284__b = __Vfunc_aes_mul_gf2p2__1286__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1287__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1284__delta));
    __Vfunc_aes_mul_gf2p2__1287__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1284__gamma));
    __Vfunc_aes_mul_gf2p2__1287__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1287__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1287__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1287__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1287__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1287__d)));
    __Vfunc_aes_mul_gf2p2__1287__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1287__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1287__d)));
    __Vfunc_aes_mul_gf2p2__1287__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1287__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1287__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1287__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1287__b)));
    __Vfunc_aes_mul_gf2p2__1287__Vfuncout = __Vfunc_aes_mul_gf2p2__1287__f;
    __Vfunc_aes_mul_gf2p4__1284__c = __Vfunc_aes_mul_gf2p2__1287__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1288__g = __Vfunc_aes_mul_gf2p4__1284__b;
    __Vfunc_aes_scale_omega2_gf2p2__1288__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1288__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1288__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1288__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1284__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1289__g = __Vfunc_aes_mul_gf2p4__1284__b;
    __Vfunc_aes_scale_omega2_gf2p2__1289__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1289__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1289__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1289__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1284__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1284__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1284__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1302__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1302__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1303__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1302__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1303__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1302__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1303__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1303__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1303__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1303__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1303__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1303__d)));
    __Vfunc_aes_mul_gf2p2__1303__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1303__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1303__d)));
    __Vfunc_aes_mul_gf2p2__1303__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1303__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1303__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1303__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1303__b)));
    __Vfunc_aes_mul_gf2p2__1303__Vfuncout = __Vfunc_aes_mul_gf2p2__1303__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__a = __Vfunc_aes_mul_gf2p2__1303__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1304__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1302__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1302__delta)));
    __Vfunc_aes_mul_gf2p2__1304__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1302__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1302__gamma)));
    __Vfunc_aes_mul_gf2p2__1304__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1304__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1304__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1304__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1304__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1304__d)));
    __Vfunc_aes_mul_gf2p2__1304__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1304__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1304__d)));
    __Vfunc_aes_mul_gf2p2__1304__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1304__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1304__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1304__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1304__b)));
    __Vfunc_aes_mul_gf2p2__1304__Vfuncout = __Vfunc_aes_mul_gf2p2__1304__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__b = __Vfunc_aes_mul_gf2p2__1304__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1305__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1302__delta));
    __Vfunc_aes_mul_gf2p2__1305__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1302__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1305__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1305__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1305__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1305__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1305__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1305__d)));
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
}
